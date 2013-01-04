SimpleJSONTable
============

SimpleJSONTable is a subclass of UITableViewController that allows you to populate an entire table view using a JSON file, and not editing the UITableViewController file at all. Using the MVC pattern, you provide the model, and SimpleJSONTable provides the view and controller
The goal is to only need
````{"text":"Cell text","image":"imageName","action":"clickedCell","height":44}````
to populate a cell, instead of editing multiple methods in a UITableViewController. To add a row, you can simply add another line in the JSON file, and not worry about updating indices throughout the file.

SimpleJSONTable supports customizing the following:
* text and detailText
* image
* method call when row is selected
* accessory
* height
* headers
