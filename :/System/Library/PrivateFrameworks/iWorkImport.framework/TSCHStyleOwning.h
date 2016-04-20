/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHStyleOwning <NSObject,TSCHStyleVending>
@optional
-(void)propertiesWereMutated:(id)arg1;

@required
-(id)chartInfo;
-(int)defaultPropertyForGeneric:(int)arg1;
-(int)specificPropertyForGeneric:(int)arg1;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
-(id)operationPropertyNameFromGenericProperty:(int)arg1;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
-(id)style;
-(id)context;
-(id)model;
-(id)valueForProperty:(int)arg1;
-(id)defaultProperties;

@end

