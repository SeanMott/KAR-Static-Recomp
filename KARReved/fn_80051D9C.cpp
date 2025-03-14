//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "memset.hpp"
#include "fn_8013927C.hpp"
#include "fn_hwExit.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_80185A88.hpp"
#include "fn_80185A88.hpp"
#include "fn_80185940.hpp"
#include "fn_80051F98.hpp"
#include "fn_80051FF8.hpp"
#include "fn_debug_memCard_reqSave.hpp"



void fn_80051D9C(PPC::Runtime::GCContext* context)
{
/*80051D9C 0004EB9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80051DA0 0004EBA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80051DA4 0004EBA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80051DA8 0004EBA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80051DAC 0004EBAC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80051DB0 0004EBB0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80051DB4 0004EBB4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80051DB8 0004EBB8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80051DBC 0004EBBC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80051DC0 0004EBC0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80051DC4 0004EBC4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80051DC8 0004EBC8*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*80051DCC 0004EBCC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x7c8);
/*80051DD0 0004EBD0*/ PPC::Runtime::ASM::bl(memset);
/*80051DD4 0004EBD4*/ PPC::Runtime::ASM::bl(fn_8013927C);
/*80051DD8 0004EBD8*/ PPC::Runtime::ASM::bl(fn_hwExit);
/*80051DDC 0004EBDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80051DE0 0004EBE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c9, context->r31));
/*80051DE4 0004EBE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r31));
/*80051DE8 0004EBE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d0, context->r31));
/*80051DEC 0004EBEC*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80051DF0 0004EBF0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80051DF4 0004EBF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80051DF8 0004EBF8*/ PPC::Runtime::ASM::beq(.L_80051E08);
/*80051DFC 0004EBFC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80051E00 0004EC00*/ PPC::Runtime::ASM::bl(fn_80185A88);
/*80051E04 0004EC04*/ PPC::Runtime::ASM::b(.L_80051E10);
RUNTIME_PPC_JUMP_LABEL(.L_80051E08, 0x80051E08) //this is a jump label
/*80051E08 0004EC08*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80051E0C 0004EC0C*/ PPC::Runtime::ASM::bl(fn_80185A88);
RUNTIME_PPC_JUMP_LABEL(.L_80051E10, 0x80051E10) //this is a jump label
/*80051E10 0004EC10*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80051E14 0004EC14*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r30));
/*80051E18 0004EC18*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r30));
/*80051E1C 0004EC1C*/ PPC::Runtime::ASM::bl(fn_80185940);
/*80051E20 0004EC20*/ PPC::Runtime::ASM::bl(fn_80051F98);
/*80051E24 0004EC24*/ PPC::Runtime::ASM::bl(fn_80051FF8);
/*80051E28 0004EC28*/ PPC::Runtime::ASM::bl(fn_debug_memCard_reqSave);
/*80051E2C 0004EC2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80051E30 0004EC30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80051E34 0004EC34*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80051E38 0004EC38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80051E3C 0004EC3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80051E40 0004EC40*/ PPC::Runtime::ASM::blr();
}