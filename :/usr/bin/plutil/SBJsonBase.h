/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:57:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/bin/plutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SBJsonBase : NSObject {

	NSMutableArray* errorTrace;

}

@property (copy,readonly) NSArray * errorTrace; 
-(NSArray *)errorTrace;
-(void)clearErrorTrace;
-(void)addErrorWithCode:(unsigned)arg1 description:(id)arg2 ;
-(void)dealloc;
@end

