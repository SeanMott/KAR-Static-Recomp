//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800550BC.hpp"



void fn_801493BC(PPC::Runtime::GCContext* context)
{
/*801493BC 001461BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801493C0 001461C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801493C4 001461C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801493C8 001461C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801493CC 001461CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801493D0 001461D0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801493D4 001461D4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801493D8 001461D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r3));
/*801493DC 001461DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801493E0 001461E0*/ PPC::Runtime::ASM::beq(.L_80149438);
/*801493E4 001461E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801493E8 001461E8*/ PPC::Runtime::ASM::li(context->r0, 0x13);
/*801493EC 001461EC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0530 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801493F0 001461F0*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
/*801493F4 001461F4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*801493F8 001461F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801493FC 001461FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80149400 00146200*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*80149404 00146204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80149408 00146208*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0534 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014940C 0014620C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80149410 00146210*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*80149414 00146214*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80149418 00146218*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8014941C 0014621C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0538 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80149420 00146220*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80149424 00146224*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x1);
/*80149428 00146228*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8014942C 0014622C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80149430 00146230*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80149434 00146234*/ PPC::Runtime::ASM::bl(fn_800550BC);
RUNTIME_PPC_JUMP_LABEL(.L_80149438, 0x80149438) //this is a jump label
/*80149438 00146238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014943C 0014623C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80149440 00146240*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80149444 00146244*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80149448 00146248*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014944C 0014624C*/ PPC::Runtime::ASM::blr();
}