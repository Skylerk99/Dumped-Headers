/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {

	SCD_Struct_NS68 _details;
	NSObject* _originalObservable;
	BOOL _isPriorNotification;
	BOOL _isRetainingObjects;

}
-(void)setOriginalObservable:(id)arg1 ;
-(void)setDetailsNoCopy:(SCD_Struct_NS69)arg1 originalObservable:(id)arg2 ;
-(id)initWithDetailsNoCopy:(SCD_Struct_NS69)arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3 ;
-(void)retainObjects;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
@end

