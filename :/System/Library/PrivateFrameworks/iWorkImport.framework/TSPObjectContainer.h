/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSArray;

@interface TSPObjectContainer : TSPObject {

	unsigned char _packageIdentifier;
	NSArray* _childObjects;

}
+(long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(BOOL)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)saveToArchiver:(id)arg1 ;
-(void)didFinishUnarchiving;
-(long long)tsp_identifier;
-(id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2 ;
-(void)prepareForComponentWriteWithDelayedObjects:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

