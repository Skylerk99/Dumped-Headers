/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDPCContainerDelegate;
#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
@class NSString, NSIndexPath, MCDPCItem, MCDPCModel, NSMapTable;

@interface MCDPCContainer : NSObject {

	NSString* _identifier;
	NSIndexPath* _indexPath;
	MCDPCItem* _rootItem;
	MCDPCModel* _model;
	NSMapTable* _cachedItemsByIndicies;
	NSMapTable* _cachedIndiciesByIdentifier;
	long long _cachedCount;
	SCD_Struct_MC3 __supportedDelegateCalls;
	id<MCDPCContainerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) MCDPCItem * rootItem;                           //@synthesize rootItem=_rootItem - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,__weak,readonly) MCDPCModel * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long cachedCount;                                 //@synthesize cachedCount=_cachedCount - In the implementation block
@property (assign,nonatomic,__weak) id<MCDPCContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(MCDPCItem *)rootItem;
-(void)setDelegate:(id<MCDPCContainerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<MCDPCContainerDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)invalidate;
-(NSString *)identifier;
-(NSString *)title;
-(void)setCount:(long long)arg1 ;
-(MCDPCModel *)model;
-(id)cachedItemForIndex:(long long)arg1 ;
-(void)refreshWithCompletion:(/*^block*/id)arg1 ;
-(id)containerAtIndex:(long long)arg1 ;
-(BOOL)isValidForRefreshedParent:(id)arg1 ;
-(void)_contentItemsUpdated:(id)arg1 ;
-(id)_initWithModel:(id)arg1 rootItem:(id)arg2 indexPath:(id)arg3 ;
-(void)getChildrenInRange:(NSRange)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCountOfChildrenWithCompletion:(/*^block*/id)arg1 ;
-(void)getRootItemWithCompletion:(/*^block*/id)arg1 ;
-(void)updateRootItemWithCompletion:(/*^block*/id)arg1 ;
-(id)cachedItemForIdentifier:(id)arg1 ;
-(long long)cachedCount;
@end

