/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol PUDisplayAsset <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) double duration; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) unsigned long long fullsizeDataFormat; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_PH6 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PH6 photoIrisVideoDuration; 
@required
-(unsigned long long)mediaType;
-(BOOL)canPlayPhotoIris;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)isFavorite;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(SCD_Struct_PH6)photoIrisStillDisplayTime;
-(double)aspectRatio;
-(unsigned long long)isContentEqualTo:(id)arg1;
-(NSDate *)creationDate;
-(NSString *)localizedGeoDescription;
-(unsigned long long)fullsizeDataFormat;
-(SCD_Struct_PH6)photoIrisVideoDuration;
-(double)duration;
-(NSDate *)modificationDate;
-(NSString *)uuid;

@end

