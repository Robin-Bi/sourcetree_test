//
//  toDoItem.h
//  ToDoList2
//
//  Created by 毕瑞 on 4/7/16.
//  Copyright © 2016 毕瑞. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end
