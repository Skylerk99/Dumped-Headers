/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, SSMutableURLRequestProperties, SSURLRequestProperties;

@interface SUPageSection : NSObject {

	double _expirationTime;
	NSString* _identifier;
	UIImage* _image;
	long long _structuredPageType;
	NSString* _title;
	SSMutableURLRequestProperties* _urlRequestProperties;
	id _userInfo;

}

@property (nonatomic,readonly) id segmentedControlItem; 
@property (assign,nonatomic) double expirationTime;                                    //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIImage * image;                                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long structuredPageType;                             //@synthesize structuredPageType=_structuredPageType - In the implementation block
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) SSURLRequestProperties * URLRequestProperties;              //@synthesize urlRequestProperties=_urlRequestProperties - In the implementation block
@property (nonatomic,retain) id userInfo;                                              //@synthesize userInfo=_userInfo - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(void)setURLRequestProperties:(SSURLRequestProperties *)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(SSURLRequestProperties *)URLRequestProperties;
-(void)setStructuredPageType:(long long)arg1 ;
-(void)_setURLBagKey:(id)arg1 ;
-(void)_setURL:(id)arg1 ;
-(id)segmentedControlItem;
-(long long)structuredPageType;
@end

