/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIIndexBarEntryListControllerDelegate;
@class NSString, SKUIViewElement;

@interface SKUIIndexBarEntryListController : NSObject {

	BOOL _needsRootTargetViewElement;
	BOOL _hidesIndexBar;
	id<SKUIIndexBarEntryListControllerDelegate> _delegate;
	NSString* _rootTargetIndexBarEntryID;
	SKUIViewElement* _rootTargetViewElement;
	long long _numberOfEntryDescriptors;

}

@property (assign,nonatomic,__weak) id<SKUIIndexBarEntryListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL needsRootTargetViewElement;                                        //@synthesize needsRootTargetViewElement=_needsRootTargetViewElement - In the implementation block
@property (nonatomic,readonly) BOOL hidesIndexBar;                                                     //@synthesize hidesIndexBar=_hidesIndexBar - In the implementation block
@property (nonatomic,readonly) NSString * rootTargetIndexBarEntryID;                                   //@synthesize rootTargetIndexBarEntryID=_rootTargetIndexBarEntryID - In the implementation block
@property (nonatomic,retain) SKUIViewElement * rootTargetViewElement;                                  //@synthesize rootTargetViewElement=_rootTargetViewElement - In the implementation block
@property (nonatomic,readonly) long long numberOfEntryDescriptors;                                     //@synthesize numberOfEntryDescriptors=_numberOfEntryDescriptors - In the implementation block
+(id)entryListControllerForEntryViewElement:(id)arg1 ;
+(id)entryListControllerForEntryListViewElement:(id)arg1 ;
-(void)setDelegate:(id<SKUIIndexBarEntryListControllerDelegate>)arg1 ;
-(id<SKUIIndexBarEntryListControllerDelegate>)delegate;
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(BOOL)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(BOOL)needsRootTargetViewElement;
-(NSString *)rootTargetIndexBarEntryID;
-(void)setRootTargetViewElement:(SKUIViewElement *)arg1 ;
-(void)reloadViewElementData;
-(void)_didInvalidate;
-(SKUIViewElement *)rootTargetViewElement;
@end

