//
//  DropItBehavior.h
//  DropIt
//
//  Created by Dmitry Reshetnik on 8/24/17.
//  Copyright © 2017 Dmitry Reshetnik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropItBehavior : UIDynamicBehavior
- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;
@end
