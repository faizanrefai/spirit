/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>

@class UIKBKey, UIKBKeyplane;

__attribute__((visibility("hidden")))
@interface UIKBKeyCacheEntry : NSObject {
@private
	UIKBKey* m_key;
	UIKBKeyplane* m_keyplane;
}
@property(readonly, retain, nonatomic) UIKBKey* key;
@property(readonly, retain, nonatomic) UIKBKeyplane* keyplane;
-(id)initWithKey:(id)key keyPlane:(id)plane;
@end
