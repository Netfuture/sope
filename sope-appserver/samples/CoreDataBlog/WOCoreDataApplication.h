/*
  Copyright (C) 2005 SKYRIX Software AG
  
  This file is part of SOPE.

  SOPE is free software; you can redistribute it and/or modify it under
  the terms of the GNU Lesser General Public License as published by the
  Free Software Foundation; either version 2, or (at your option) any
  later version.

  SOPE is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with SOPE; see the file COPYING.  If not, write to the
  Free Software Foundation, 59 Temple Place - Suite 330, Boston, MA
  02111-1307, USA.
*/

#ifndef __WOCoreDataApplication_H__
#define __WOCoreDataApplication_H__

#include <NGObjWeb/WOApplication.h>

@class NSString, NSURL;
@class NSManagedObjectContext, NSManagedObjectModel;
@class NSPersistentStoreCoordinator;

@interface WOCoreDataApplication : WOApplication
{
  NSManagedObjectModel         *managedObjectModel;
  NSPersistentStoreCoordinator *storeCoordinator;
}

/* accessors */

- (NSManagedObjectModel *)managedObjectModel;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

/* locating the default store */

- (NSString *)applicationSupportFolder;
- (NSURL *)defaultPersistentStoreURL;
- (NSString *)defaultPersistentStoreType;

/* creating editing contexts */

- (NSManagedObjectContext *)createManagedObjectContext;

@end

#endif /* __WOCoreDataApplication_H__ */