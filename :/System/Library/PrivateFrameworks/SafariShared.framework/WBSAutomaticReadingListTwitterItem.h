/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSAutomaticReadingListItem.h>

@class NSString, NSDate;

@interface WBSAutomaticReadingListTwitterItem : WBSAutomaticReadingListItem {

	NSString* _originatorScreenName;
	NSString* _displayURLString;
	NSString* _expandedURLString;
	NSString* _originatorProfileImageURLString;
	NSDate* _retweetCreationDate;

}

@property (nonatomic,copy) NSString * originatorScreenName;                         //@synthesize originatorScreenName=_originatorScreenName - In the implementation block
@property (nonatomic,copy) NSString * displayURLString;                             //@synthesize displayURLString=_displayURLString - In the implementation block
@property (nonatomic,copy) NSString * expandedURLString;                            //@synthesize expandedURLString=_expandedURLString - In the implementation block
@property (nonatomic,copy) NSString * originatorProfileImageURLString;              //@synthesize originatorProfileImageURLString=_originatorProfileImageURLString - In the implementation block
@property (nonatomic,copy) NSDate * retweetCreationDate;                            //@synthesize retweetCreationDate=_retweetCreationDate - In the implementation block
-(id)description;
-(id)displayString;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)socialSource;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(id)sourceRecordCreationDate;
-(id)domainString;
-(NSRange)displayURLRange;
-(NSString *)originatorProfileImageURLString;
-(void)setOriginatorProfileImageURLString:(NSString *)arg1 ;
-(NSString *)expandedURLString;
-(NSString *)originatorScreenName;
-(id)_profileImageURLStringWithSuffix:(id)arg1 ;
-(NSString *)displayURLString;
-(NSDate *)retweetCreationDate;
-(id)retweeterProfileURL;
-(void)setOriginatorScreenName:(NSString *)arg1 ;
-(void)setDisplayURLString:(NSString *)arg1 ;
-(void)setExpandedURLString:(NSString *)arg1 ;
-(void)setRetweetCreationDate:(NSDate *)arg1 ;
@end

