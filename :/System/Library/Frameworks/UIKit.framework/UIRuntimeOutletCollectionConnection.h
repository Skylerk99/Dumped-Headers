/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

	NSString* runtimeCollectionClassName;
	BOOL addsContentToExistingCollection;

}

@property (copy) NSString * runtimeCollectionClassName; 
@property (assign) BOOL addsContentToExistingCollection; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)connectForSimulator;
-(void)connect;
-(NSString *)runtimeCollectionClassName;
-(void)performConnect;
-(void)setRuntimeCollectionClassName:(NSString *)arg1 ;
-(BOOL)addsContentToExistingCollection;
-(void)setAddsContentToExistingCollection:(BOOL)arg1 ;
@end

