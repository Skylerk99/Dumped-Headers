/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem {

	FMFLocation* _lastKnownLocation;

}

@property (nonatomic,readonly) long long offerState; 
@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * locationText; 
@property (nonatomic,retain) FMFLocation * lastKnownLocation;              //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
+(id)placeholderPreviewCache;
+(id)titleBarMaskImageForWidth:(double)arg1 ;
-(void)dealloc;
-(IMHandle *)sender;
-(id)time;
-(Class)balloonViewClass;
-(BOOL)isFromMe;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(long long)offerState;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(void)_handleLocationDidChangeNotification:(id)arg1 ;
-(void)setLastKnownLocation:(FMFLocation *)arg1 ;
-(FMFLocation *)lastKnownLocation;
-(id)_previewCacheKey:(unsigned long long)arg1 ;
-(id)savedPreviewFromURL:(id)arg1 ;
-(id)_desaturatedImageForImage:(id)arg1 ;
-(id)_generatePlaceholderThumbnailFillToSize:(CGSize)arg1 ;
-(void)_generateMapPreview;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 withCoordinate:(CGSize)arg3 forState:(long long)arg4 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 ;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
-(NSString *)locationText;
-(NSString *)titleText;
@end

