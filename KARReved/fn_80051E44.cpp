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



void fn_80051E44(PPC::Runtime::GCContext* context)
{
/*80051E44 0004EC44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80051E48 0004EC48*/ PPC::Runtime::ASM::mflr(context->r0);
/*80051E4C 0004EC4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80051E50 0004EC50*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80051E54 0004EC54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80051E58 0004EC58*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80051E5C 0004EC5C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80051E60 0004EC60*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80051E64 0004EC64*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80051E68 0004EC68*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80051E6C 0004EC6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80051E70 0004EC70*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*80051E74 0004EC74*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x7c8);
/*80051E78 0004EC78*/ PPC::Runtime::ASM::bl(memset);
/*80051E7C 0004EC7C*/ PPC::Runtime::ASM::bl(fn_8013927C);
/*80051E80 0004EC80*/ PPC::Runtime::ASM::bl(fn_hwExit);
/*80051E84 0004EC84*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80051E88 0004EC88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c9, context->r31));
/*80051E8C 0004EC8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r31));
/*80051E90 0004EC90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d0, context->r31));
/*80051E94 0004EC94*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*80051E98 0004EC98*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80051E9C 0004EC9C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80051EA0 0004ECA0*/ PPC::Runtime::ASM::beq(.L_80051EB0);
/*80051EA4 0004ECA4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80051EA8 0004ECA8*/ PPC::Runtime::ASM::bl(fn_80185A88);
/*80051EAC 0004ECAC*/ PPC::Runtime::ASM::b(.L_80051EB8);
RUNTIME_PPC_JUMP_LABEL(.L_80051EB0, 0x80051EB0) //this is a jump label
/*80051EB0 0004ECB0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80051EB4 0004ECB4*/ PPC::Runtime::ASM::bl(fn_80185A88);
RUNTIME_PPC_JUMP_LABEL(.L_80051EB8, 0x80051EB8) //this is a jump label
/*80051EB8 0004ECB8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80051EBC 0004ECBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r30));
/*80051EC0 0004ECC0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c8, context->r30));
/*80051EC4 0004ECC4*/ PPC::Runtime::ASM::bl(fn_80185940);
/*80051EC8 0004ECC8*/ PPC::Runtime::ASM::bl(fn_80051F98);
/*80051ECC 0004ECCC*/ PPC::Runtime::ASM::bl(fn_80051FF8);
/*80051ED0 0004ECD0*/ PPC::Runtime::ASM::bl(fn_debug_memCard_reqSave);
/*80051ED4 0004ECD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80051ED8 0004ECD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80051EDC 0004ECDC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80051EE0 0004ECE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80051EE4 0004ECE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80051EE8 0004ECE8*/ PPC::Runtime::ASM::blr();
}