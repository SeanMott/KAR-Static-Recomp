//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803C00C8.hpp"
#include "fn_803C00D0.hpp"
#include "fn_TRK_flush_cache.hpp"
#include "fn_TRK_flush_cache.hpp"
#include "fn_TRKAppendBuffer1_ui64.hpp"
#include "fn_TRKReadBuffer1_ui64.hpp"
#include "fn_TRK_flush_cache.hpp"
#include "fn_TRK_flush_cache.hpp"



void fn_803C110C(PPC::Runtime::GCContext* context)
{
/*803C110C 003BDF0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xf0, context->r1));
/*803C1110 003BDF10*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C1114 003BDF14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*803C1118 003BDF18*/ PPC::Runtime::ASM::stmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803C111C 003BDF1C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*803C1120 003BDF20*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x21);
/*803C1124 003BDF24*/ PPC::Runtime::ASM::mr(context->r20, context->r3);
/*803C1128 003BDF28*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*803C112C 003BDF2C*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*803C1130 003BDF30*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*803C1134 003BDF34*/ PPC::Runtime::ASM::ble(.L_803C1140);
/*803C1138 003BDF38*/ PPC::Runtime::ASM::li(context->r3, 0x701);
/*803C113C 003BDF3C*/ PPC::Runtime::ASM::b(.L_803C15C4);
RUNTIME_PPC_JUMP_LABEL(.L_803C1140, 0x803C1140) //this is a jump label
/*803C1140 003BDF40*/ PPC::Runtime::ASM::lis(context->r3, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_HighBit);
/*803C1144 003BDF44*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C1148 003BDF48*/ PPC::Runtime::ASM::addi(context->r27, context->r3, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_LowBit);
/*803C114C 003BDF4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*803C1150 003BDF50*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803C1154 003BDF54*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*803C1158 003BDF58*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*803C115C 003BDF5C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C1160 003BDF60*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C1164 003BDF64*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C1168 003BDF68*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C116C 003BDF6C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r27));
/*803C1170 003BDF70*/ PPC::Runtime::ASM::bl(fn_803C00C8);
/*803C1174 003BDF74*/ PPC::Runtime::ASM::ori(context->r3, context->r3, 0x2000);
/*803C1178 003BDF78*/ PPC::Runtime::ASM::bl(fn_803C00D0);
/*803C117C 003BDF7C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C1180 003BDF80*/ PPC::Runtime::ASM::mr(context->r22, context->r20);
/*803C1184 003BDF84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803C1188 003BDF88*/ PPC::Runtime::ASM::slwi(context->r26, context->r20, 21);
/*803C118C 003BDF8C*/ PPC::Runtime::ASM::addi(context->r21, context->r1, 0x98);
/*803C1190 003BDF90*/ PPC::Runtime::ASM::addi(context->r25, context->r1, 0x48);
/*803C1194 003BDF94*/ PPC::Runtime::ASM::addi(context->r24, context->r1, 0x70);
/*803C1198 003BDF98*/ PPC::Runtime::ASM::addi(context->r23, context->r1, 0x20);
/*803C119C 003BDF9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C11A0 003BDFA0*/ PPC::Runtime::ASM::b(.L_803C1574);
RUNTIME_PPC_JUMP_LABEL(.L_803C11A4, 0x803C11A4) //this is a jump label
/*803C11A4 003BDFA4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C11A8 003BDFA8*/ PPC::Runtime::ASM::beq(.L_803C1388);
/*803C11AC 003BDFAC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_101 @ Get_MemoryOffset_HighBit);
/*803C11B0 003BDFB0*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x20);
/*803C11B4 003BDFB4*/ PPC::Runtime::ASM::addi(context->r12, context->r3, MemoryOffset_101 @ Get_MemoryOffset_LowBit);
/*803C11B8 003BDFB8*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r12));
/*803C11BC 003BDFBC*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r12));
/*803C11C0 003BDFC0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803C11C4 003BDFC4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803C11C8 003BDFC8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803C11CC 003BDFCC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803C11D0 003BDFD0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803C11D4 003BDFD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803C11D8 003BDFD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803C11DC 003BDFDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*803C11E0 003BDFE0*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803C11E4 003BDFE4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*803C11E8 003BDFE8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803C11EC 003BDFEC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*803C11F0 003BDFF0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*803C11F4 003BDFF4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*803C11F8 003BDFF8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*803C11FC 003BDFFC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*803C1200 003BE000*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*803C1204 003BE004*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*803C1208 003BE008*/ PPC::Runtime::ASM::bge(.L_803C1254);
/*803C120C 003BE00C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C1210 003BE010*/ PPC::Runtime::ASM::oris(context->r0, context->r26, 0xc803);
/*803C1214 003BE014*/ PPC::Runtime::ASM::beq(.L_803C121C);
/*803C1218 003BE018*/ PPC::Runtime::ASM::oris(context->r0, context->r26, 0xd803);
RUNTIME_PPC_JUMP_LABEL(.L_803C121C, 0x803C121C) //this is a jump label
/*803C121C 003BE01C*/ PPC::Runtime::ASM::lis(context->r3, 0x4e80);
/*803C1220 003BE020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803C1224 003BE024*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x20);
/*803C1228 003BE028*/ PPC::Runtime::ASM::mr(context->r3, context->r21);
/*803C122C 003BE02C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*803C1230 003BE030*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*803C1234 003BE034*/ PPC::Runtime::ASM::bl(fn_TRK_flush_cache);
/*803C1238 003BE038*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056BDCC @ Get_MemoryOffset_HighBit);
/*803C123C 003BE03C*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x98);
/*803C1240 003BE040*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_8056BDCC @ Get_MemoryOffset_LowBit);
/*803C1244 003BE044*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803C1248 003BE048*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803C124C 003BE04C*/ PPC::Runtime::ASM::bctrl();
/*803C1250 003BE050*/ PPC::Runtime::ASM::b(.L_803C1374);
RUNTIME_PPC_JUMP_LABEL(.L_803C1254, 0x803C1254) //this is a jump label
/*803C1254 003BE054*/ PPC::Runtime::ASM::bne(.L_803C127C);
/*803C1258 003BE058*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C125C 003BE05C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C1260 003BE060*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1264 003BE064*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803C1268 003BE068*/ PPC::Runtime::ASM::and(context->r0, context->r4, context->r0);
/*803C126C 003BE06C*/ PPC::Runtime::ASM::and(context->r3, context->r5, context->r3);
/*803C1270 003BE070*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C1274 003BE074*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1278 003BE078*/ PPC::Runtime::ASM::b(.L_803C1374);
RUNTIME_PPC_JUMP_LABEL(.L_803C127C, 0x803C127C) //this is a jump label
/*803C127C 003BE07C*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x21);
/*803C1280 003BE080*/ PPC::Runtime::ASM::bne(.L_803C1374);
/*803C1284 003BE084*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C1288 003BE088*/ PPC::Runtime::ASM::bne(.L_803C1294);
/*803C128C 003BE08C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1290 003BE090*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803C1294, 0x803C1294) //this is a jump label
/*803C1294 003BE094*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_99 @ Get_MemoryOffset_HighBit);
/*803C1298 003BE098*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C129C 003BE09C*/ PPC::Runtime::ASM::addi(context->r12, context->r3, MemoryOffset_99 @ Get_MemoryOffset_LowBit);
/*803C12A0 003BE0A0*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r12));
/*803C12A4 003BE0A4*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r12));
/*803C12A8 003BE0A8*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803C12AC 003BE0AC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803C12B0 003BE0B0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803C12B4 003BE0B4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803C12B8 003BE0B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803C12BC 003BE0BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803C12C0 003BE0C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803C12C4 003BE0C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*803C12C8 003BE0C8*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803C12CC 003BE0CC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803C12D0 003BE0D0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803C12D4 003BE0D4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*803C12D8 003BE0D8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*803C12DC 003BE0DC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*803C12E0 003BE0E0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803C12E4 003BE0E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803C12E8 003BE0E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803C12EC 003BE0EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*803C12F0 003BE0F0*/ PPC::Runtime::ASM::beq(.L_803C130C);
/*803C12F4 003BE0F4*/ PPC::Runtime::ASM::lis(context->r3, 0x7c9f);
/*803C12F8 003BE0F8*/ PPC::Runtime::ASM::lis(context->r0, 0x9083);
/*803C12FC 003BE0FC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x55a);
/*803C1300 003BE100*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803C1304 003BE104*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803C1308 003BE108*/ PPC::Runtime::ASM::b(.L_803C1320);
RUNTIME_PPC_JUMP_LABEL(.L_803C130C, 0x803C130C) //this is a jump label
/*803C130C 003BE10C*/ PPC::Runtime::ASM::lis(context->r3, 0x7c9f);
/*803C1310 003BE110*/ PPC::Runtime::ASM::lis(context->r4, 0x8083);
/*803C1314 003BE114*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x45a);
/*803C1318 003BE118*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803C131C 003BE11C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803C1320, 0x803C1320) //this is a jump label
/*803C1320 003BE120*/ PPC::Runtime::ASM::lis(context->r4, 0x4e80);
/*803C1324 003BE124*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*803C1328 003BE128*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x20);
/*803C132C 003BE12C*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*803C1330 003BE130*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*803C1334 003BE134*/ PPC::Runtime::ASM::bl(fn_TRK_flush_cache);
/*803C1338 003BE138*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056BDCC @ Get_MemoryOffset_HighBit);
/*803C133C 003BE13C*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x48);
/*803C1340 003BE140*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_8056BDCC @ Get_MemoryOffset_LowBit);
/*803C1344 003BE144*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803C1348 003BE148*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803C134C 003BE14C*/ PPC::Runtime::ASM::bctrl();
/*803C1350 003BE150*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C1354 003BE154*/ PPC::Runtime::ASM::beq(.L_803C1374);
/*803C1358 003BE158*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C135C 003BE15C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803C1360 003BE160*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803C1364 003BE164*/ PPC::Runtime::ASM::and(context->r3, context->r3, context->r0);
/*803C1368 003BE168*/ PPC::Runtime::ASM::and(context->r0, context->r4, context->r4);
/*803C136C 003BE16C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1370 003BE170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803C1374, 0x803C1374) //this is a jump label
/*803C1374 003BE174*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C1378 003BE178*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803C137C 003BE17C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1380 003BE180*/ PPC::Runtime::ASM::bl(fn_TRKAppendBuffer1_ui64);
/*803C1384 003BE184*/ PPC::Runtime::ASM::b(.L_803C1560);
RUNTIME_PPC_JUMP_LABEL(.L_803C1388, 0x803C1388) //this is a jump label
/*803C1388 003BE188*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803C138C 003BE18C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803C1390 003BE190*/ PPC::Runtime::ASM::bl(fn_TRKReadBuffer1_ui64);
/*803C1394 003BE194*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_101 @ Get_MemoryOffset_HighBit);
/*803C1398 003BE198*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x20);
/*803C139C 003BE19C*/ PPC::Runtime::ASM::addi(context->r20, context->r3, MemoryOffset_101 @ Get_MemoryOffset_LowBit);
/*803C13A0 003BE1A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C13A4 003BE1A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r20));
/*803C13A8 003BE1A8*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r20));
/*803C13AC 003BE1AC*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r20));
/*803C13B0 003BE1B0*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r20));
/*803C13B4 003BE1B4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r20));
/*803C13B8 003BE1B8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r20));
/*803C13BC 003BE1BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r20));
/*803C13C0 003BE1C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r20));
/*803C13C4 003BE1C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r20));
/*803C13C8 003BE1C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r20));
/*803C13CC 003BE1CC*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803C13D0 003BE1D0*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803C13D4 003BE1D4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803C13D8 003BE1D8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*803C13DC 003BE1DC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803C13E0 003BE1E0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803C13E4 003BE1E4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803C13E8 003BE1E8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*803C13EC 003BE1EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803C13F0 003BE1F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*803C13F4 003BE1F4*/ PPC::Runtime::ASM::bge(.L_803C1444);
/*803C13F8 003BE1F8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C13FC 003BE1FC*/ PPC::Runtime::ASM::oris(context->r0, context->r26, 0xc803);
/*803C1400 003BE200*/ PPC::Runtime::ASM::beq(.L_803C1408);
/*803C1404 003BE204*/ PPC::Runtime::ASM::oris(context->r0, context->r26, 0xd803);
RUNTIME_PPC_JUMP_LABEL(.L_803C1408, 0x803C1408) //this is a jump label
/*803C1408 003BE208*/ PPC::Runtime::ASM::lis(context->r3, 0x4e80);
/*803C140C 003BE20C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803C1410 003BE210*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x20);
/*803C1414 003BE214*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*803C1418 003BE218*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*803C141C 003BE21C*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*803C1420 003BE220*/ PPC::Runtime::ASM::bl(fn_TRK_flush_cache);
/*803C1424 003BE224*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056BDCC @ Get_MemoryOffset_HighBit);
/*803C1428 003BE228*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x70);
/*803C142C 003BE22C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_8056BDCC @ Get_MemoryOffset_LowBit);
/*803C1430 003BE230*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803C1434 003BE234*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803C1438 003BE238*/ PPC::Runtime::ASM::bctrl();
/*803C143C 003BE23C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C1440 003BE240*/ PPC::Runtime::ASM::b(.L_803C1560);
RUNTIME_PPC_JUMP_LABEL(.L_803C1444, 0x803C1444) //this is a jump label
/*803C1444 003BE244*/ PPC::Runtime::ASM::bne(.L_803C1468);
/*803C1448 003BE248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C144C 003BE24C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*803C1450 003BE250*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1454 003BE254*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r3);
/*803C1458 003BE258*/ PPC::Runtime::ASM::and(context->r4, context->r5, context->r4);
/*803C145C 003BE25C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C1460 003BE260*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C1464 003BE264*/ PPC::Runtime::ASM::b(.L_803C1560);
RUNTIME_PPC_JUMP_LABEL(.L_803C1468, 0x803C1468) //this is a jump label
/*803C1468 003BE268*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x21);
/*803C146C 003BE26C*/ PPC::Runtime::ASM::bne(.L_803C1560);
/*803C1470 003BE270*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C1474 003BE274*/ PPC::Runtime::ASM::bne(.L_803C1480);
/*803C1478 003BE278*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C147C 003BE27C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803C1480, 0x803C1480) //this is a jump label
/*803C1480 003BE280*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_99 @ Get_MemoryOffset_HighBit);
/*803C1484 003BE284*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C1488 003BE288*/ PPC::Runtime::ASM::addi(context->r12, context->r3, MemoryOffset_99 @ Get_MemoryOffset_LowBit);
/*803C148C 003BE28C*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r12));
/*803C1490 003BE290*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r12));
/*803C1494 003BE294*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803C1498 003BE298*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803C149C 003BE29C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803C14A0 003BE2A0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803C14A4 003BE2A4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*803C14A8 003BE2A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803C14AC 003BE2AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803C14B0 003BE2B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*803C14B4 003BE2B4*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C14B8 003BE2B8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C14BC 003BE2BC*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803C14C0 003BE2C0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803C14C4 003BE2C4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803C14C8 003BE2C8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803C14CC 003BE2CC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803C14D0 003BE2D0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803C14D4 003BE2D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803C14D8 003BE2D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803C14DC 003BE2DC*/ PPC::Runtime::ASM::beq(.L_803C14F8);
/*803C14E0 003BE2E0*/ PPC::Runtime::ASM::lis(context->r3, 0x7c9f);
/*803C14E4 003BE2E4*/ PPC::Runtime::ASM::lis(context->r0, 0x9083);
/*803C14E8 003BE2E8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x55a);
/*803C14EC 003BE2EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C14F0 003BE2F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C14F4 003BE2F4*/ PPC::Runtime::ASM::b(.L_803C150C);
RUNTIME_PPC_JUMP_LABEL(.L_803C14F8, 0x803C14F8) //this is a jump label
/*803C14F8 003BE2F8*/ PPC::Runtime::ASM::lis(context->r3, 0x7c9f);
/*803C14FC 003BE2FC*/ PPC::Runtime::ASM::lis(context->r4, 0x8083);
/*803C1500 003BE300*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x45a);
/*803C1504 003BE304*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C1508 003BE308*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803C150C, 0x803C150C) //this is a jump label
/*803C150C 003BE30C*/ PPC::Runtime::ASM::lis(context->r4, 0x4e80);
/*803C1510 003BE310*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*803C1514 003BE314*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x20);
/*803C1518 003BE318*/ PPC::Runtime::ASM::li(context->r4, 0x28);
/*803C151C 003BE31C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803C1520 003BE320*/ PPC::Runtime::ASM::bl(fn_TRK_flush_cache);
/*803C1524 003BE324*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056BDCC @ Get_MemoryOffset_HighBit);
/*803C1528 003BE328*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x20);
/*803C152C 003BE32C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_8056BDCC @ Get_MemoryOffset_LowBit);
/*803C1530 003BE330*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803C1534 003BE334*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803C1538 003BE338*/ PPC::Runtime::ASM::bctrl();
/*803C153C 003BE33C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803C1540 003BE340*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C1544 003BE344*/ PPC::Runtime::ASM::beq(.L_803C1560);
/*803C1548 003BE348*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C154C 003BE34C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*803C1550 003BE350*/ PPC::Runtime::ASM::and(context->r0, context->r3, context->r3);
/*803C1554 003BE354*/ PPC::Runtime::ASM::and(context->r4, context->r5, context->r4);
/*803C1558 003BE358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803C155C 003BE35C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803C1560, 0x803C1560) //this is a jump label
/*803C1560 003BE360*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803C1564 003BE364*/ PPC::Runtime::ASM::addis(context->r26, context->r26, 0x20);
/*803C1568 003BE368*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x1);
/*803C156C 003BE36C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x8);
/*803C1570 003BE370*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803C1574, 0x803C1574) //this is a jump label
/*803C1574 003BE374*/ PPC::Runtime::ASM::cmplw(context->r22, context->r28);
/*803C1578 003BE378*/ PPC::Runtime::ASM::bgt(.L_803C1584);
/*803C157C 003BE37C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803C1580 003BE380*/ PPC::Runtime::ASM::beq(.L_803C11A4);
RUNTIME_PPC_JUMP_LABEL(.L_803C1584, 0x803C1584) //this is a jump label
/*803C1584 003BE384*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r27));
/*803C1588 003BE388*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C158C 003BE38C*/ PPC::Runtime::ASM::beq(.L_803C159C);
/*803C1590 003BE390*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C1594 003BE394*/ PPC::Runtime::ASM::li(context->r3, 0x702);
/*803C1598 003BE398*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_803C159C, 0x803C159C) //this is a jump label
/*803C159C 003BE39C*/ PPC::Runtime::ASM::lis(context->r4, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_HighBit);
/*803C15A0 003BE3A0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C15A4 003BE3A4*/ PPC::Runtime::ASM::addi(context->r7, context->r4, gTRKExceptionStatus_804F9264 @ Get_MemoryOffset_LowBit);
/*803C15A8 003BE3A8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C15AC 003BE3AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C15B0 003BE3B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C15B4 003BE3B4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803C15B8 003BE3B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*803C15BC 003BE3BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*803C15C0 003BE3C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_803C15C4, 0x803C15C4) //this is a jump label
/*803C15C4 003BE3C4*/ PPC::Runtime::ASM::lmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803C15C8 003BE3C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*803C15CC 003BE3CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C15D0 003BE3D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xf0);
/*803C15D4 003BE3D4*/ PPC::Runtime::ASM::blr();
}