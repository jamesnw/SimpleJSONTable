//
//  SimpleJSONTable.h
//  What To Brew
//
//  Created by James Stuckey Weber on 1/2/13.
//  Copyright (c) 2013 ChinStrApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleJSONTable : UITableViewController
@property (nonatomic, strong) NSArray *data;
@property (nonatomic) SimpleJSONTable *delegate;
-(id)initWithStyle:(UITableViewStyle)style file:(NSString *)file delegate:(SimpleJSONTable*)delegate;
@end
