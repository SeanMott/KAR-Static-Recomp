//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C74E0(PPC::Runtime::GCContext* context)
{
/*801C74E0 001C42E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C74E4 001C42E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C74E8 001C42E8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801C74EC 001C42EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FB0 @ Get_MemoryOffset_SDA21);
/*801C74F0 001C42F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C74F4 001C42F4*/ PPC::Runtime::ASM::lwz(context->r0, lbl_805D6FB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C74F8 001C42F8*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*801C74FC 001C42FC*/ PPC::Runtime::ASM::bge(.L_801C7504);
/*801C7500 001C4300*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801C7504, 0x801C7504) //this is a jump label
/*801C7504 001C4304*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801C7508 001C4308*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*801C750C 001C430C*/ PPC::Runtime::ASM::bge(.L_801C7514);
/*801C7510 001C4310*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801C7514, 0x801C7514) //this is a jump label
/*801C7514 001C4314*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055A03C @ Get_MemoryOffset_HighBit);
/*801C7518 001C4318*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801C751C 001C431C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055A03C @ Get_MemoryOffset_LowBit);
/*801C7520 001C4320*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*801C7524 001C4324*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C7528 001C4328*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C752C 001C432C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C7530 001C4330*/ PPC::Runtime::ASM::blr();
}