//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801EF278.hpp"



void fn_801EF1C8(PPC::Runtime::GCContext* context)
{
/*801EF1C8 001EBFC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EF1CC 001EBFCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EF1D0 001EBFD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF1D4 001EBFD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r3));
/* 801EF1D8 001EBFD8  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801EF1DC 001EBFDC*/ PPC::Runtime::ASM::beq(.L_801EF1F8);
/*801EF1E0 001EBFE0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EF1E4 001EBFE4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x664, context->r3));
/*801EF1E8 001EBFE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r4));
/*801EF1EC 001EBFEC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801EF1F0 001EBFF0*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801EF1F4 001EBFF4*/ PPC::Runtime::ASM::beq(.L_801EF204);
RUNTIME_PPC_JUMP_LABEL(.L_801EF1F8, 0x801EF1F8) //this is a jump label
/*801EF1F8 001EBFF8*/ PPC::Runtime::ASM::bl(fn_801EF278);
/*801EF1FC 001EBFFC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801EF200 001EC000*/ PPC::Runtime::ASM::b(.L_801EF208);
RUNTIME_PPC_JUMP_LABEL(.L_801EF204, 0x801EF204) //this is a jump label
/*801EF204 001EC004*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801EF208, 0x801EF208) //this is a jump label
/*801EF208 001EC008*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EF20C 001EC00C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EF210 001EC010*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EF214 001EC014*/ PPC::Runtime::ASM::blr();
}