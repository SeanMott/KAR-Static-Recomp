//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059818.hpp"
#include "fn_80073FA4.hpp"
#include "fn_LoadDatsForCityTrial.hpp"
#include "fn_80059818.hpp"
#include "fn_80059520.hpp"
#include "fn_801395AC.hpp"
#include "fn_8013AA60.hpp"
#include "fn_80177F10.hpp"
#include "fn_80178120.hpp"
#include "fn_80178860.hpp"
#include "fn_80178D64.hpp"
#include "fn_80179190.hpp"
#include "fn_80179618.hpp"
#include "fn_80179D64.hpp"
#include "fn_8017A4AC.hpp"
#include "fn_8017AAB0.hpp"
#include "fn_8017B140.hpp"
#include "fn_8016180C.hpp"



void fn_80132E8C(PPC::Runtime::GCContext* context)
{
/*80132E8C 0012FC8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80132E90 0012FC90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80132E94 0012FC94*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80132E98 0012FC98*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1133 @ Get_MemoryOffset_HighBit);
/*80132E9C 0012FC9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80132EA0 0012FCA0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80132EA4 0012FCA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80132EA8 0012FCA8*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_1133 @ Get_MemoryOffset_LowBit);
/*80132EAC 0012FCAC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80132EB0 0012FCB0*/ PPC::Runtime::ASM::stb(context->r0, lbl_80558788 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*80132EB4 0012FCB4*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7E0 @ Get_MemoryOffset_SDA21);
/*80132EB8 0012FCB8*/ PPC::Runtime::ASM::bl(fn_80059818);
/*80132EBC 0012FCBC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80132EC0 0012FCC0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80132EC4 0012FCC4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80132EC8 0012FCC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r3));
/*80132ECC 0012FCCC*/ PPC::Runtime::ASM::bl(fn_80073FA4);
/*80132ED0 0012FCD0*/ PPC::Runtime::ASM::bl(fn_LoadDatsForCityTrial);
/*80132ED4 0012FCD4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x12c);
/*80132ED8 0012FCD8*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD798 @ Get_MemoryOffset_SDA21);
/*80132EDC 0012FCDC*/ PPC::Runtime::ASM::bl(fn_80059818);
/*80132EE0 0012FCE0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80132EE4 0012FCE4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80132EE8 0012FCE8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1e8);
/*80132EEC 0012FCEC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80132EF0 0012FCF0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80132EF4 0012FCF4*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80132EF8 0012FCF8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80132EFC 0012FCFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80132F00 0012FD00*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80132F04 0012FD04*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80132F08 0012FD08*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559A90 @ Get_MemoryOffset_HighBit);
/*80132F0C 0012FD0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd40, context->r4));
/*80132F10 0012FD10*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559A90 @ Get_MemoryOffset_LowBit);
/*80132F14 0012FD14*/ PPC::Runtime::ASM::li(context->r4, 0x1f0);
/*80132F18 0012FD18*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80132F1C 0012FD1C*/ PPC::Runtime::ASM::bl(fn_801395AC);
/*80132F20 0012FD20*/ PPC::Runtime::ASM::bl(fn_8013AA60);
/*80132F24 0012FD24*/ PPC::Runtime::ASM::bl(fn_80177F10);
/*80132F28 0012FD28*/ PPC::Runtime::ASM::bl(fn_80178120);
/*80132F2C 0012FD2C*/ PPC::Runtime::ASM::bl(fn_80178860);
/*80132F30 0012FD30*/ PPC::Runtime::ASM::bl(fn_80178D64);
/*80132F34 0012FD34*/ PPC::Runtime::ASM::bl(fn_80179190);
/*80132F38 0012FD38*/ PPC::Runtime::ASM::bl(fn_80179618);
/*80132F3C 0012FD3C*/ PPC::Runtime::ASM::bl(fn_80179D64);
/*80132F40 0012FD40*/ PPC::Runtime::ASM::bl(fn_8017A4AC);
/*80132F44 0012FD44*/ PPC::Runtime::ASM::bl(fn_8017AAB0);
/*80132F48 0012FD48*/ PPC::Runtime::ASM::bl(fn_8017B140);
/*80132F4C 0012FD4C*/ PPC::Runtime::ASM::bl(fn_8016180C);
/*80132F50 0012FD50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80132F54 0012FD54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80132F58 0012FD58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80132F5C 0012FD5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80132F60 0012FD60*/ PPC::Runtime::ASM::blr();
}