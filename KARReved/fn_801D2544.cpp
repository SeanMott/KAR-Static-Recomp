//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800BBFC4.hpp"
#include "fn_800B8188.hpp"
#include "fn_800BBF14.hpp"



void fn_801D2544(PPC::Runtime::GCContext* context)
{
/*801D2544 001CF344*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D2548 001CF348*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D254C 001CF34C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*801D2550 001CF350*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D2554 001CF354*/ PPC::Runtime::ASM::bne(.L_801D2560);
/*801D2558 001CF358*/ PPC::Runtime::ASM::bl(fn_800BBFC4);
/*801D255C 001CF35C*/ PPC::Runtime::ASM::b(.L_801D2574);
RUNTIME_PPC_JUMP_LABEL(.L_801D2560, 0x801D2560) //this is a jump label
/*801D2560 001CF360*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x5);
/*801D2564 001CF364*/ PPC::Runtime::ASM::beq(.L_801D2574);
/*801D2568 001CF368*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*801D256C 001CF36C*/ PPC::Runtime::ASM::bl(fn_800B8188);
/*801D2570 001CF370*/ PPC::Runtime::ASM::bl(fn_800BBF14);
RUNTIME_PPC_JUMP_LABEL(.L_801D2574, 0x801D2574) //this is a jump label
/*801D2574 001CF374*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D2578 001CF378*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D257C 001CF37C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D2580 001CF380*/ PPC::Runtime::ASM::blr();
}