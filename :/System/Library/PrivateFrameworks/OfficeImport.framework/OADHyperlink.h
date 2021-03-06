/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface OADHyperlink : NSObject {

	NSURL* mTargetLocation;
	int mTargetMode;
	NSString* mTargetFrame;
	NSString* mAction;
	NSString* mTooltip;
	NSString* mInvalidUrl;
	BOOL mDoEndSound;
	BOOL mIsVisited;
	BOOL mDoAddToHistory;

}

@property (assign,nonatomic) BOOL doEndSound; 
@property (assign,nonatomic) BOOL isVisited; 
@property (assign,nonatomic) BOOL doAddToHistory; 
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setTargetFrame:(id)arg1 ;
-(id)targetFrame;
-(id)targetLocation;
-(int)targetMode;
-(id)tooltip;
-(id)invalidUrl;
-(void)setInvalidUrl:(id)arg1 ;
-(BOOL)doEndSound;
-(void)setDoEndSound:(BOOL)arg1 ;
-(BOOL)isVisited;
-(void)setIsVisited:(BOOL)arg1 ;
-(BOOL)doAddToHistory;
-(void)setDoAddToHistory:(BOOL)arg1 ;
-(void)setTargetLocation:(id)arg1 ;
-(void)setTargetMode:(int)arg1 ;
-(void)setTooltip:(id)arg1 ;
@end

