/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDataSource <NSObject>
@optional
-(long long)numberOfSectionsInCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@required
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

