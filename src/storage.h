/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2002-2008  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

int read_device_alias(const char *src, const char *dst, char *alias, size_t size);
int write_device_alias(const char *src, const char *dst, const char *alias);
int write_discoverable_timeout(bdaddr_t *bdaddr, int timeout);
int read_discoverable_timeout(const char *src, int *timeout);
int write_device_mode(bdaddr_t *bdaddr, const char *mode);
int read_device_mode(const char *src, char *mode, int length);
int read_on_mode(const char *src, char *mode, int length);
int write_local_name(bdaddr_t *bdaddr, char *name);
int read_local_name(bdaddr_t *bdaddr, char *name);
int write_local_class(bdaddr_t *bdaddr, uint8_t *class);
int read_local_class(bdaddr_t *bdaddr, uint8_t *class);
int write_remote_class(bdaddr_t *local, bdaddr_t *peer, uint32_t class);
int read_remote_class(bdaddr_t *local, bdaddr_t *peer, uint32_t *class);
int write_device_name(bdaddr_t *local, bdaddr_t *peer, char *name);
int read_device_name(const char *src, const char *dst, char *name);
int write_remote_eir(bdaddr_t *local, bdaddr_t *peer, uint8_t *data);
int write_l2cap_info(bdaddr_t *local, bdaddr_t *peer,
			uint16_t mtu_result, uint16_t mtu,
			uint16_t mask_result, uint32_t mask);
int read_l2cap_info(bdaddr_t *local, bdaddr_t *peer,
			uint16_t *mtu_result, uint16_t *mtu,
			uint16_t *mask_result, uint32_t *mask);
int write_version_info(bdaddr_t *local, bdaddr_t *peer, uint16_t manufacturer, uint8_t lmp_ver, uint16_t lmp_subver);
int write_features_info(bdaddr_t *local, bdaddr_t *peer, unsigned char *features);
int write_lastseen_info(bdaddr_t *local, bdaddr_t *peer, struct tm *tm);
int write_lastused_info(bdaddr_t *local, bdaddr_t *peer, struct tm *tm);
int write_link_key(bdaddr_t *local, bdaddr_t *peer, unsigned char *key, uint8_t type, int length);
int read_link_key(bdaddr_t *local, bdaddr_t *peer, unsigned char *key, uint8_t *type);
int read_pin_length(bdaddr_t *local, bdaddr_t *peer);
int read_pin_code(bdaddr_t *local, bdaddr_t *peer, char *pin);
gboolean read_trust(const bdaddr_t *local, const char *addr, const char *service);
int write_trust(const char *src, const char *addr, const char *service, gboolean trust);
GSList *list_trusts(bdaddr_t *local, const char *service);
int write_device_profiles(bdaddr_t *src, bdaddr_t *dst, const char *profiles);
int delete_entry(bdaddr_t *src, const char *storage, const char *key);
int store_record(const gchar *src, const gchar *dst, sdp_record_t *rec);
sdp_record_t *fetch_record(const gchar *src, const gchar *dst, const uint32_t handle);
int delete_record(const gchar *src, const gchar *dst, const uint32_t handle);
