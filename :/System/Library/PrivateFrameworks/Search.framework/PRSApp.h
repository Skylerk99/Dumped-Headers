/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol PRSApp
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * bundle_id; 
@property (nonatomic,retain) NSURL * install_url; 
@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSURL * punchout_uri; 
@optional
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(void)setPunchout_uri:(id)arg1;
-(NSURL *)punchout_uri;

@required
-(void)setName:(id)arg1;
-(NSString *)name;
-(void)setBundle_id:(id)arg1;
-(void)setInstall_url:(id)arg1;
-(NSString *)bundle_id;
-(NSURL *)install_url;

@end

