//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8039A9BC(PPC::Runtime::GCContext* context)
{
/*8039A9BC 003977BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A9C0 003977C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A9C4 003977C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A9C8 003977C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A9CC 003977CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039A9D0 003977D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039A9D4 003977D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8039A9D8 003977D8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A9DC 003977DC*/ PPC::Runtime::ASM::bctrl();
/*8039A9E0 003977E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039A9E4 003977E4*/ PPC::Runtime::ASM::beq(.L_8039A9F0);
/*8039A9E8 003977E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5018 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039A9EC 003977EC*/ PPC::Runtime::ASM::b(.L_8039AA14);
RUNTIME_PPC_JUMP_LABEL(.L_8039A9F0, 0x8039A9F0) //this is a jump label
/*8039A9F0 003977F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039A9F4 003977F4*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8039A9F8 003977F8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8039A9FC 003977FC*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x800);
/*8039AA00 00397800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039AA04 00397804*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039AA08 00397808*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1000);
/*8039AA0C 0039780C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8039AA10 00397810*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8039AA14, 0x8039AA14) //this is a jump label
/*8039AA14 00397814*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039AA18 00397818*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039AA1C 0039781C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039AA20 00397820*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039AA24 00397824*/ PPC::Runtime::ASM::blr();
}