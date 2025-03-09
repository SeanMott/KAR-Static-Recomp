//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_raise.hpp"
#include "__begin_critical_region.hpp"
#include "__end_critical_region.hpp"
#include "__kill_critical_regions.hpp"
#include "_ExitProcess.hpp"



void fn_abort(PPC::Runtime::GCContext* context)
{
/*803AFA2C 003AC82C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803AFA30 003AC830*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AFA34 003AC834*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803AFA38 003AC838*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AFA3C 003AC83C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803AFA40 003AC840*/ PPC::Runtime::ASM::bl(fn_raise);
/*803AFA44 003AC844*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803AFA48 003AC848*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803AFA4C 003AC84C*/ PPC::Runtime::ASM::stw(context->r0, __aborting @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AFA50 003AC850*/ PPC::Runtime::ASM::bl(__begin_critical_region);
/*803AFA54 003AC854*/ PPC::Runtime::ASM::lis(context->r3, __atexit_funcs @ Get_MemoryOffset_HighBit);
/*803AFA58 003AC858*/ PPC::Runtime::ASM::addi(context->r31, context->r3, __atexit_funcs @ Get_MemoryOffset_LowBit);
/*803AFA5C 003AC85C*/ PPC::Runtime::ASM::b(.L_803AFA7C);
RUNTIME_PPC_JUMP_LABEL(.L_803AFA60, 0x803AFA60) //this is a jump label
/*803AFA60 003AC860*/ PPC::Runtime::ASM::lwz(context->r3, __atexit_curr_func @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AFA64 003AC864*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*803AFA68 003AC868*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*803AFA6C 003AC86C*/ PPC::Runtime::ASM::stw(context->r3, __atexit_curr_func @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AFA70 003AC870*/ PPC::Runtime::ASM::lwzx(context->r12, context->r31, context->r0);
/*803AFA74 003AC874*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AFA78 003AC878*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803AFA7C, 0x803AFA7C) //this is a jump label
/*803AFA7C 003AC87C*/ PPC::Runtime::ASM::lwz(context->r0, __atexit_curr_func @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AFA80 003AC880*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803AFA84 003AC884*/ PPC::Runtime::ASM::bgt(.L_803AFA60);
/*803AFA88 003AC888*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803AFA8C 003AC88C*/ PPC::Runtime::ASM::bl(__end_critical_region);
/*803AFA90 003AC890*/ PPC::Runtime::ASM::bl(__kill_critical_regions);
/*803AFA94 003AC894*/ PPC::Runtime::ASM::lwz(context->r12, __console_exit @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AFA98 003AC898*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803AFA9C 003AC89C*/ PPC::Runtime::ASM::beq(.L_803AFAB0);
/*803AFAA0 003AC8A0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AFAA4 003AC8A4*/ PPC::Runtime::ASM::bctrl();
/*803AFAA8 003AC8A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803AFAAC 003AC8AC*/ PPC::Runtime::ASM::stw(context->r0, __console_exit @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803AFAB0, 0x803AFAB0) //this is a jump label
/*803AFAB0 003AC8B0*/ PPC::Runtime::ASM::bl(_ExitProcess);
/*803AFAB4 003AC8B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AFAB8 003AC8B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803AFABC 003AC8BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AFAC0 003AC8C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803AFAC4 003AC8C4*/ PPC::Runtime::ASM::blr();
}