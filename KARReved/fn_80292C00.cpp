//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80292C00(PPC::Runtime::GCContext* context)
{
/*80292C00 0028FA00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80292C04 0028FA04*/ PPC::Runtime::ASM::mflr(context->r0);
/*80292C08 0028FA08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292C0C 0028FA0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292C10 0028FA10*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80292C14 0028FA14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80292C18 0028FA18  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80292C1C 0028FA1C*/ PPC::Runtime::ASM::beq(.L_80292C74);
/*80292C20 0028FA20*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD7DC @ Get_MemoryOffset_HighBit);
/*80292C24 0028FA24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD7DC @ Get_MemoryOffset_LowBit);
/*80292C28 0028FA28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292C2C 0028FA2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80292C30 0028FA30*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*80292C34 0028FA34*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80292C38 0028FA38*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80292C3C 0028FA3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80292C40 0028FA40*/ PPC::Runtime::ASM::beq(.L_80292C64);
/*80292C44 0028FA44*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD7B4 @ Get_MemoryOffset_HighBit);
/*80292C48 0028FA48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292C4C 0028FA4C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD7B4 @ Get_MemoryOffset_LowBit);
/*80292C50 0028FA50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292C54 0028FA54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292C58 0028FA58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80292C5C 0028FA5C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80292C60 0028FA60*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80292C64, 0x80292C64) //this is a jump label
/*80292C64 0028FA64*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80292C68 0028FA68*/ PPC::Runtime::ASM::ble(.L_80292C74);
/*80292C6C 0028FA6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292C70 0028FA70*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80292C74, 0x80292C74) //this is a jump label
/*80292C74 0028FA74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292C78 0028FA78*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292C7C 0028FA7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292C80 0028FA80*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80292C84 0028FA84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292C88 0028FA88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80292C8C 0028FA8C*/ PPC::Runtime::ASM::blr();
}