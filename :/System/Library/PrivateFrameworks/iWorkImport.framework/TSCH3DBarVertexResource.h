/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DAbstractBarVertexResource.h>

@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {

	TSCH3DBarExtrusionGeometry* mGeometry;

}
-(long long)verticesOffset;
-(long long)capOffset;
-(long long)numCapVertices;
-(id)initWithGeometry:(id)arg1 ;
-(void)dealloc;
-(id)geometry;
-(long long)numVertices;
-(id)get;
@end

