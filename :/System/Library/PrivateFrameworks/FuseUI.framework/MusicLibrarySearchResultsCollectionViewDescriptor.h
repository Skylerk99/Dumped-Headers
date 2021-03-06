/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityCollectionViewDescriptor.h>

@interface MusicLibrarySearchResultsCollectionViewDescriptor : MusicEntityCollectionViewDescriptor {

	BOOL _itemsFillRow;
	unsigned long long _numberOfItemsPerRow;

}

@property (assign,nonatomic) BOOL itemsFillRow;                                   //@synthesize itemsFillRow=_itemsFillRow - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItemsPerRow;              //@synthesize numberOfItemsPerRow=_numberOfItemsPerRow - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfItemsPerRow;
-(void)setItemsFillRow:(BOOL)arg1 ;
-(void)setNumberOfItemsPerRow:(unsigned long long)arg1 ;
-(BOOL)itemsFillRow;
@end

