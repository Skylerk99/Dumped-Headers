/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKStyleMapper <NSObject>
@property (nonatomic,readonly) BOOL clientsMustRemap; 
@required
-(id)targetStylesheet;
-(id)mappedStyleForStyle:(id)arg1;
-(BOOL)clientsMustRemap;
-(void)pushMappingContext:(id)arg1;
-(void)popMappingContext:(id)arg1;

@end

