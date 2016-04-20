/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKPrintSettings, NSDate, NSData;

@interface PKJob : NSObject {

	long long number;
	long long remoteJobId;
	long long mediaProgress;
	long long mediaSheets;
	long long mediaSheetsCompleted;
	NSString* printerDisplayName;
	long long printerKind;
	NSString* printerLocation;
	PKPrintSettings* settings;
	long long state;
	NSDate* timeAtCompleted;
	NSDate* timeAtCreation;
	NSDate* timeAtProcessing;
	NSData* thumbnailImage;

}

@property (assign,nonatomic) long long number; 
@property (assign,nonatomic) long long remoteJobId; 
@property (assign,nonatomic) long long mediaProgress; 
@property (assign,nonatomic) long long mediaSheets; 
@property (assign,nonatomic) long long mediaSheetsCompleted; 
@property (nonatomic,retain) NSString * printerDisplayName; 
@property (assign,nonatomic) long long printerKind; 
@property (nonatomic,retain) NSString * printerLocation; 
@property (nonatomic,retain) PKPrintSettings * settings; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,retain) NSDate * timeAtCompleted; 
@property (nonatomic,retain) NSDate * timeAtCreation; 
@property (nonatomic,retain) NSDate * timeAtProcessing; 
@property (nonatomic,retain) NSData * thumbnailImage; 
+(id)currentJob;
+(id)jobs;
-(NSData *)thumbnailImage;
-(long long)cancel;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(PKPrintSettings *)settings;
-(long long)update;
-(void)setSettings:(PKPrintSettings *)arg1 ;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
-(void)setMediaProgress:(long long)arg1 ;
-(void)setMediaSheets:(long long)arg1 ;
-(void)setMediaSheetsCompleted:(long long)arg1 ;
-(void)setRemoteJobId:(long long)arg1 ;
-(void)setPrinterDisplayName:(NSString *)arg1 ;
-(void)setPrinterKind:(long long)arg1 ;
-(void)setPrinterLocation:(NSString *)arg1 ;
-(void)setTimeAtCompleted:(NSDate *)arg1 ;
-(void)setTimeAtCreation:(NSDate *)arg1 ;
-(void)setTimeAtProcessing:(NSDate *)arg1 ;
-(long long)remoteJobId;
-(long long)mediaProgress;
-(long long)mediaSheets;
-(long long)mediaSheetsCompleted;
-(NSString *)printerDisplayName;
-(long long)printerKind;
-(NSString *)printerLocation;
-(NSDate *)timeAtCompleted;
-(NSDate *)timeAtCreation;
-(NSDate *)timeAtProcessing;
-(void)setThumbnailImage:(NSData *)arg1 ;
@end

