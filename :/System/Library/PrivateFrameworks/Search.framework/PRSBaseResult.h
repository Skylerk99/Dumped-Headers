/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol PRSBaseResult <NSObject,NSCopying,PRSPredictionSupport>
@property (nonatomic,retain) NSString * type; 
@property (assign,nonatomic) unsigned long long score; 
@property (assign,nonatomic) unsigned long long rank; 
@property (assign) BOOL isQuickGlance; 
@property (assign) long long topHitScore; 
@property (nonatomic,retain) NSString * resultBundleID; 
@property (assign,nonatomic) long long placement; 
@property (nonatomic,retain) NSString * resultIdentifier; 
@property (assign,nonatomic) long long media_kind; 
@property (nonatomic,retain) NSString * adam_id; 
@property (assign,nonatomic) BOOL playable; 
@property (nonatomic,retain) NSString * geoUserSessionIDString; 
@property (assign,nonatomic) double geoUserSessionStartTime; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) float resultScore; 
@property (nonatomic,retain) NSString * fbr; 
@property (nonatomic,retain) NSURL * resultURL; 
@property (assign,nonatomic) long long max_age; 
@property (nonatomic,retain) NSString * bundle_id; 
@property (nonatomic,retain) id<PRSApp> app; 
@property (nonatomic,retain) NSString * templateName; 
@property (nonatomic,retain) NSString * section_header; 
@optional
-(void)setPlayable:(BOOL)arg1;
-(unsigned long long)score;
-(void)setType:(id)arg1;
-(NSString *)type;
-(long long)placement;
-(void)setPlacement:(long long)arg1;
-(void)setScore:(unsigned long long)arg1;
-(unsigned long long)rank;
-(void)setRank:(unsigned long long)arg1;
-(NSString *)resultBundleID;
-(BOOL)isQuickGlance;
-(void)setIsQuickGlance:(BOOL)arg1;
-(long long)topHitScore;
-(void)setTopHitScore:(long long)arg1;
-(void)setResultBundleID:(id)arg1;
-(void)setMedia_kind:(long long)arg1;
-(void)setAdam_id:(id)arg1;
-(void)setGeoUserSessionIDString:(id)arg1;
-(void)setGeoUserSessionStartTime:(double)arg1;
-(NSURL *)resultURL;
-(void)setResultURL:(id)arg1;
-(long long)max_age;
-(void)setMax_age:(long long)arg1;
-(void)setBundle_id:(id)arg1;
-(void)setApp:(id)arg1;
-(NSString *)bundle_id;
-(NSString *)geoUserSessionIDString;
-(double)geoUserSessionStartTime;
-(NSString *)adam_id;
-(BOOL)playable;
-(long long)media_kind;
-(id<PRSApp>)app;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(id)arg1;
-(void)setSection_header:(id)arg1;
-(void)setTemplateName:(id)arg1;
-(NSString *)templateName;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(float)resultScore;
-(void)setResultScore:(float)arg1;
-(NSString *)section_header;

@end

