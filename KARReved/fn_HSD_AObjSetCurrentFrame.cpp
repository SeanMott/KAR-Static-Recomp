//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_FObjReqAnimAll.hpp"



void fn_HSD_AObjSetCurrentFrame(PPC::Runtime::GCContext* context)
{
/*803FDA6C 003FA86C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803FDA70 003FA870*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FDA74 003FA874*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FDA78 003FA878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FDA7C 003FA87C*/ PPC::Runtime::ASM::beq(.L_803FDAB0);
/*803FDA80 003FA880*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803FDA84 003FA884*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 1, 1);
/*803FDA88 003FA888*/ PPC::Runtime::ASM::bne(.L_803FDAB0);
/*803FDA8C 003FA88C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FDA90 003FA890*/ PPC::Runtime::ASM::beq(.L_803FDAB0);
/*803FDA94 003FA894*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803FDA98 003FA898*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803FDA9C 003FA89C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 2, 0);
/*803FDAA0 003FA8A0*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x800);
/*803FDAA4 003FA8A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803FDAA8 003FA8A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803FDAAC 003FA8AC*/ PPC::Runtime::ASM::bl(fn_HSD_FObjReqAnimAll);
RUNTIME_PPC_JUMP_LABEL(.L_803FDAB0, 0x803FDAB0) //this is a jump label
/*803FDAB0 003FA8B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FDAB4 003FA8B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FDAB8 003FA8B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803FDABC 003FA8BC*/ PPC::Runtime::ASM::blr();
}