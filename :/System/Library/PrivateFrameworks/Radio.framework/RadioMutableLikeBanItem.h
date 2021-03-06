/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioLikeBanItem.h>

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioMutableLikeBanItem : RadioLikeBanItem {

	long long _itemID;

}

@property (assign,nonatomic) long long albumID; 
@property (nonatomic,retain) RadioArtworkCollection * artworkCollection; 
@property (assign,nonatomic) BOOL isSeed; 
@property (assign,nonatomic) long long itemID;                                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) RadioSeedMetadata * seedMetadata; 
@property (assign,nonatomic) long long storeID; 
@property (assign,nonatomic) long long type; 
-(long long)itemID;
-(void)setType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemID:(long long)arg1 ;
-(void)setAlbumID:(long long)arg1 ;
-(void)setIsSeed:(BOOL)arg1 ;
-(void)setSeedMetadata:(RadioSeedMetadata *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
-(void)setStoreID:(long long)arg1 ;
@end

