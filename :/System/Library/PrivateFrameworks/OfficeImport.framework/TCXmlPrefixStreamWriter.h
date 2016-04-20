/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCXmlStreamWriter.h>

@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {

	NSMutableArray* mStateStack;

}
+(xmlTextWriterRef)createNonXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(BOOL)arg3 ;
+(xmlTextWriterRef)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(BOOL)arg3 ;
-(BOOL)writeIndexAttribute:(id)arg1 intContent:(unsigned long long)arg2 ;
-(void)writeTextString:(id)arg1 forElement:(id)arg2 ;
-(BOOL)startOAElement:(id)arg1 ;
-(BOOL)writeOAAttribute:(id)arg1 content:(id)arg2 ;
-(void)pushOAState;
-(BOOL)writeOAAttribute:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writeOAAttribute:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writeOAAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(void)dealloc;
-(id)currentState;
-(BOOL)addElement:(id)arg1 ;
-(id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(void)popState;
-(id)pushState;
-(id)currentElementPrefix;
-(BOOL)startElement:(id)arg1 ;
-(id)currentAttributePrefix;
-(BOOL)writeAttribute:(id)arg1 content:(id)arg2 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(BOOL)arg3 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long long)arg3 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3 ;
-(void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(id)pushStateWithSharedPrefix:(id)arg1 ;
-(BOOL)writeAttribute:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writeAttribute:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writeAttribute:(id)arg1 unsignedLongContent:(unsigned long long)arg2 ;
-(BOOL)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writeAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long long)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2 ;
-(id)initWithTextWriter:(xmlTextWriterRef)arg1 ;
@end

