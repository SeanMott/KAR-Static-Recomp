//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_deallocate_from_fixed_pools.hpp"
#include "fn_deallocate_from_var_pools.hpp"



void fn___pool_free(PPC::Runtime::GCContext* context)
{
/*803AFB38 003AC938*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803AFB3C 003AC93C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AFB40 003AC940*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803AFB44 003AC944*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AFB48 003AC948*/ PPC::Runtime::ASM::beq(.L_803AFB80);
/*803AFB4C 003AC94C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r4));
/* 803AFB50 003AC950  54 A0 07 FF */ clrlwi. context->r0 , context->r5 , 31
/*803AFB54 003AC954*/ PPC::Runtime::ASM::bne(.L_803AFB60);
/*803AFB58 003AC958*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803AFB5C 003AC95C*/ PPC::Runtime::ASM::b(.L_803AFB6C);
RUNTIME_PPC_JUMP_LABEL(.L_803AFB60, 0x803AFB60) //this is a jump label
/*803AFB60 003AC960*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r4));
/*803AFB64 003AC964*/ PPC::Runtime::ASM::clrrwi(context->r5, context->r0, 3);
/*803AFB68 003AC968*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803AFB6C, 0x803AFB6C) //this is a jump label
/*803AFB6C 003AC96C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x44);
/*803AFB70 003AC970*/ PPC::Runtime::ASM::bgt(.L_803AFB7C);
/*803AFB74 003AC974*/ PPC::Runtime::ASM::bl(fn_deallocate_from_fixed_pools);
/*803AFB78 003AC978*/ PPC::Runtime::ASM::b(.L_803AFB80);
RUNTIME_PPC_JUMP_LABEL(.L_803AFB7C, 0x803AFB7C) //this is a jump label
/*803AFB7C 003AC97C*/ PPC::Runtime::ASM::bl(fn_deallocate_from_var_pools);
RUNTIME_PPC_JUMP_LABEL(.L_803AFB80, 0x803AFB80) //this is a jump label
/*803AFB80 003AC980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AFB84 003AC984*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AFB88 003AC988*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803AFB8C 003AC98C*/ PPC::Runtime::ASM::blr();
}