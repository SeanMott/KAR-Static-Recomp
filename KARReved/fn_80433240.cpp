//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_80433240(PPC::Runtime::GCContext* context)
{
/*80433240 00430040*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80433244 00430044*/ PPC::Runtime::ASM::mflr(context->r0);
/*80433248 00430048*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043324C 0043004C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80433250 00430050*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80433254 00430054*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80433258 00430058*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DE390 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043325C 0043005C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80433260 00430060*/ PPC::Runtime::ASM::beq(.L_804332D4);
/*80433264 00430064*/ PPC::Runtime::ASM::beq(.L_804332D4);
/*80433268 00430068*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8043326C 0043006C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80433270 00430070*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80433274 00430074*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*80433278 00430078*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8043327C 0043007C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80433280 00430080  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*80433284 00430084*/ PPC::Runtime::ASM::beq(.L_8043328C);
/*80433288 00430088*/ PPC::Runtime::ASM::b(.L_8043329C);
RUNTIME_PPC_JUMP_LABEL(.L_8043328C, 0x8043328C) //this is a jump label
/*8043328C 0043008C*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
/*80433290 00430090*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r4);
/*80433294 00430094*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80433298 00430098*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_8043329C, 0x8043329C) //this is a jump label
/*8043329C 0043009C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804332A0 004300A0*/ PPC::Runtime::ASM::beq(.L_804332D4);
/*804332A4 004300A4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*804332A8 004300A8*/ PPC::Runtime::ASM::beq(.L_804332D4);
/*804332AC 004300AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804332B0 004300B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*804332B4 004300B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*804332B8 004300B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*804332BC 004300BC*/ PPC::Runtime::ASM::bctrl();
/*804332C0 004300C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804332C4 004300C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*804332C8 004300C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*804332CC 004300CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*804332D0 004300D0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_804332D4, 0x804332D4) //this is a jump label
/*804332D4 004300D4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*804332D8 004300D8*/ PPC::Runtime::ASM::beq(.L_80433310);
/*804332DC 004300DC*/ PPC::Runtime::ASM::beq(.L_80433310);
/*804332E0 004300E0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804332E4 004300E4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*804332E8 004300E8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804332EC 004300EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*804332F0 004300F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*804332F4 004300F4*/ PPC::Runtime::ASM::bne(.L_80433310);
/*804332F8 004300F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80505300 @ Get_MemoryOffset_HighBit);
/*804332FC 004300FC*/ PPC::Runtime::ASM::lis(context->r5, lbl_8050530C @ Get_MemoryOffset_HighBit);
/*80433300 00430100*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80505300 @ Get_MemoryOffset_LowBit);
/*80433304 00430104*/ PPC::Runtime::ASM::li(context->r4, 0x5d);
/*80433308 00430108*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_8050530C @ Get_MemoryOffset_LowBit);
/*8043330C 0043010C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80433310, 0x80433310) //this is a jump label
/*80433310 00430110*/ PPC::Runtime::ASM::stw(context->r31, STRUCT_BYTE4_COUNT_1805DE390 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80433314 00430114*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80433318 00430118*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043331C 0043011C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80433320 00430120*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80433324 00430124*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80433328 00430128*/ PPC::Runtime::ASM::blr();
}