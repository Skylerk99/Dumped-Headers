/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLRUCache.h>

@interface VKTileCache : VKLRUCache
-(id)objectForKey:(const VKTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(id)tileWithoutTouchingForKey:(const VKTileKey*)arg1 ;
-(id)objectWithoutPromotingForKey:(const VKTileKey*)arg1 ;
@end

