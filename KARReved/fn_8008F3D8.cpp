//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800CF058.hpp"



void fn_8008F3D8(PPC::Runtime::GCContext* context)
{
/*8008F3D8 0008C1D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8008F3DC 0008C1DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8008F3E0 0008C1E0*/ PPC::Runtime::ASM::lis(context->r4, BLOCK_OF_NULL_2 @ Get_MemoryOffset_HighBit);
/*8008F3E4 0008C1E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8008F3E8 0008C1E8*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*8008F3EC 0008C1EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8008F3F0 0008C1F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8008F3F4 0008C1F4*/ PPC::Runtime::ASM::addi(context->r3, context->r4, BLOCK_OF_NULL_2 @ Get_MemoryOffset_LowBit);
/*8008F3F8 0008C1F8*/ PPC::Runtime::ASM::subi(context->r5, context->r31, 0x4);
/*8008F3FC 0008C1FC*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x4);
/*8008F400 0008C200*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008F404, 0x8008F404) //this is a jump label
/*8008F404 0008C204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8008F408 0008C208*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8008F40C 0008C20C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8008F410 0008C210*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8008F414 0008C214*/ PPC::Runtime::ASM::bdnz(.L_8008F404);
/*8008F418 0008C218*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8008F41C 0008C21C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8008F420 0008C220*/ PPC::Runtime::ASM::bl(fn_800CF058);
/*8008F424 0008C224*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8008F428 0008C228*/ PPC::Runtime::ASM::bgt(.L_8008F438);
/*8008F42C 0008C22C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
/*8008F430 0008C230*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x3);
/*8008F434 0008C234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8008F438, 0x8008F438) //this is a jump label
/*8008F438 0008C238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8008F43C 0008C23C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8008F440 0008C240*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8008F444 0008C244*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8008F448 0008C248*/ PPC::Runtime::ASM::blr();
}