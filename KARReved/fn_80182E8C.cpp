//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059818.hpp"
#include "fn_80059520.hpp"
#include "fn_80052FB8.hpp"
#include "fn_80182E68.hpp"
#include "fn_80182E68.hpp"
#include "fn_80183004.hpp"



void fn_80182E8C(PPC::Runtime::GCContext* context)
{
/*80182E8C 0017FC8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80182E90 0017FC90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80182E94 0017FC94*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AD640 @ Get_MemoryOffset_HighBit);
/*80182E98 0017FC98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80182E9C 0017FC9C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80182EA0 0017FCA0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804AD640 @ Get_MemoryOffset_LowBit);
/*80182EA4 0017FCA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80182EA8 0017FCA8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80182EAC 0017FCAC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80182EB0 0017FCB0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80182EB4 0017FCB4*/ PPC::Runtime::ASM::bl(fn_80059818);
/*80182EB8 0017FCB8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AD654 @ Get_MemoryOffset_HighBit);
/*80182EBC 0017FCBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80182EC0 0017FCC0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AD654 @ Get_MemoryOffset_LowBit);
/*80182EC4 0017FCC4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80182EC8 0017FCC8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*80182ECC 0017FCCC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80182ED0 0017FCD0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80182ED4 0017FCD4*/ PPC::Runtime::ASM::li(context->r3, 0x1d);
/*80182ED8 0017FCD8*/ PPC::Runtime::ASM::li(context->r4, 0x1c);
/*80182EDC 0017FCDC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80182EE0 0017FCE0*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80182EE4 0017FCE4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80182EE8 0017FCE8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80182EEC 0017FCEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80182EF0 0017FCF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80182EF4 0017FCF4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*80182EF8 0017FCF8*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80182EFC 0017FCFC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80182F00 0017FD00*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80182F04 0017FD04*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80182F08 0017FD08*/ PPC::Runtime::ASM::lis(context->r4, fn_8042A29C @ Get_MemoryOffset_HighBit);
/*80182F0C 0017FD0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80182F10 0017FD10*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8042A29C @ Get_MemoryOffset_LowBit);
/*80182F14 0017FD14*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80182F18 0017FD18*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80182F1C 0017FD1C*/ PPC::Runtime::ASM::lis(context->r3, 0x4000);
/*80182F20 0017FD20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80182F24 0017FD24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80182F28 0017FD28*/ PPC::Runtime::ASM::li(context->r3, 0x1d);
/*80182F2C 0017FD2C*/ PPC::Runtime::ASM::li(context->r4, 0x1c);
/*80182F30 0017FD30*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80182F34 0017FD34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80182F38 0017FD38*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80182F3C 0017FD3C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80182F40 0017FD40*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80182F44 0017FD44*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80182F48 0017FD48*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80182F4C 0017FD4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80182F50 0017FD50*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80182F54 0017FD54*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80182F58 0017FD58*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80182F5C 0017FD5C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80182F60 0017FD60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80182F64 0017FD64*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*80182F68 0017FD68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80182F6C 0017FD6C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80182F70 0017FD70*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80182F74 0017FD74*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80182F78 0017FD78*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80182F7C 0017FD7C*/ PPC::Runtime::ASM::lis(context->r4, fn_GXLink_Common @ Get_MemoryOffset_HighBit);
/*80182F80 0017FD80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80182F84 0017FD84*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_GXLink_Common @ Get_MemoryOffset_LowBit);
/*80182F88 0017FD88*/ PPC::Runtime::ASM::li(context->r5, 0x1e);
/*80182F8C 0017FD8C*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80182F90 0017FD90*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*80182F94 0017FD94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80182F98 0017FD98*/ PPC::Runtime::ASM::lis(context->r4, 0x2800);
/*80182F9C 0017FD9C*/ PPC::Runtime::ASM::bl(fn_80052FB8);
/*80182FA0 0017FDA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80182FA4 0017FDA4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80182FA8 0017FDA8*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*80182FAC 0017FDAC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80182FB0 0017FDB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80182FB4 0017FDB4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*80182FB8 0017FDB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0E50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80182FBC 0017FDBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80182FC0 0017FDC0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*80182FC4 0017FDC4*/ PPC::Runtime::ASM::lis(context->r4, fn_80182E68 @ Get_MemoryOffset_HighBit);
/*80182FC8 0017FDC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80182FCC 0017FDCC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80182E68 @ Get_MemoryOffset_LowBit);
/*80182FD0 0017FDD0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80182FD4 0017FDD4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80182FD8 0017FDD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80182FDC 0017FDDC*/ PPC::Runtime::ASM::bl(fn_80183004);
/*80182FE0 0017FDE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80182FE4 0017FDE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80182FE8 0017FDE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80182FEC 0017FDEC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80182FF0 0017FDF0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80182FF4 0017FDF4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80182FF8 0017FDF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80182FFC 0017FDFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80183000 0017FE00*/ PPC::Runtime::ASM::blr();
}