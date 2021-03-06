/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TSUASLLogCategoryController : NSObject {

	NSMutableDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _allCategoriesEnabledOverride;

}

@property (assign,nonatomic) BOOL allCategoriesEnabledOverride;              //@synthesize allCategoriesEnabledOverride=_allCategoriesEnabledOverride - In the implementation block
+(id)sharedController;
-(void)readFromDefaults;
-(void)setAllCategoriesEnabledOverride:(BOOL)arg1 ;
-(BOOL)allCategoriesEnabledOverride;
-(BOOL)isCategoryEnabled:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forCategory:(id)arg2 ;
-(BOOL)isCategoryDefined:(id)arg1 ;
-(void)removeCategory:(id)arg1 ;
-(id)init;
-(id)categories;
@end

