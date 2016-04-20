/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:31 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLService : NSObject
+(id)allServices;
+(id)serviceForServiceType:(id)arg1 ;
-(void)addExtraParameters:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isFirstClassService;
-(long long)maximumURLCount;
-(long long)maximumImageCount;
-(long long)maximumImageDataSize;
-(long long)maximumVideoCount;
-(long long)maximumVideoDataSize;
-(long long)maximumVideoTimeLimit;
-(BOOL)supportsImageURL:(id)arg1 ;
-(BOOL)supportsVideoURL:(id)arg1 ;
-(id)composeViewController;
-(id)activityTitle;
-(id)activityImage;
-(id)accountType;
-(id)serviceType;
-(BOOL)hasAccounts;
@end

