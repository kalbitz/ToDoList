//
//  TDLToDoItem.h
//  ToDoList
//
//  Created by Paul Albitz on 6/17/14.
//
//

#import <Foundation/Foundation.h>

@interface TDLToDoItem : NSObject

@property            NSString *itemName;
@property            BOOL      completed;
@property (readonly) NSDate   *creationDate;

@end
