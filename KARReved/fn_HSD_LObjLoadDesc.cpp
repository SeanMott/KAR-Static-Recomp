//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hsdSearchClassInfo.hpp"
#include "fn_hsdNew.hpp"
#include "fn___assert.hpp"
#include "fn_hsdNew.hpp"
#include "fn___assert.hpp"



void fn_HSD_LObjLoadDesc(PPC::Runtime::GCContext* context)
{
/*80400238 003FD038*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8040023C 003FD03C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80400240 003FD040*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80400244 003FD044*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80400248 003FD048*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8040024C 003FD04C*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x8);
/*80400250 003FD050*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80400254 003FD054*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80400258 003FD058*/ PPC::Runtime::ASM::b(.L_804002F8);
RUNTIME_PPC_JUMP_LABEL(.L_8040025C, 0x8040025C) //this is a jump label
/*8040025C 003FD05C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80400260 003FD060*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80400264 003FD064*/ PPC::Runtime::ASM::beq(.L_80400274);
/*80400268 003FD068*/ PPC::Runtime::ASM::bl(fn_hsdSearchClassInfo);
/*8040026C 003FD06C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80400270 003FD070*/ PPC::Runtime::ASM::bne(.L_804002B0);
RUNTIME_PPC_JUMP_LABEL(.L_80400274, 0x80400274) //this is a jump label
/*80400274 003FD074*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE208 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80400278 003FD078*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8040027C 003FD07C*/ PPC::Runtime::ASM::beq(.L_80400284);
/*80400280 003FD080*/ PPC::Runtime::ASM::b(.L_8040028C);
RUNTIME_PPC_JUMP_LABEL(.L_80400284, 0x80400284) //this is a jump label
/*80400284 003FD084*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503188 @ Get_MemoryOffset_HighBit);
/*80400288 003FD088*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80503188 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8040028C, 0x8040028C) //this is a jump label
/*8040028C 003FD08C*/ PPC::Runtime::ASM::bl(fn_hsdNew);
/* 80400290 003FD090  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80400294 003FD094*/ PPC::Runtime::ASM::bne(.L_804002A8);
/*80400298 003FD098*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_594 @ Get_MemoryOffset_SDA21);
/*8040029C 003FD09C*/ PPC::Runtime::ASM::li(context->r4, 0x5dc);
/*804002A0 003FD0A0*/ PPC::Runtime::ASM::li(context->r5, String_ "ne" 5 @ Get_MemoryOffset_SDA21);
/*804002A4 003FD0A4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804002A8, 0x804002A8) //this is a jump label
/*804002A8 003FD0A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804002AC 003FD0AC*/ PPC::Runtime::ASM::b(.L_804002D4);
RUNTIME_PPC_JUMP_LABEL(.L_804002B0, 0x804002B0) //this is a jump label
/*804002B0 003FD0B0*/ PPC::Runtime::ASM::bl(fn_hsdNew);
/*804002B4 003FD0B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804002B8 003FD0B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804002BC 003FD0BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804002C0 003FD0C0*/ PPC::Runtime::ASM::bne(.L_804002D4);
/*804002C4 003FD0C4*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_594 @ Get_MemoryOffset_SDA21);
/*804002C8 003FD0C8*/ PPC::Runtime::ASM::li(context->r4, 0x682);
/*804002CC 003FD0CC*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_541 @ Get_MemoryOffset_SDA21);
/*804002D0 003FD0D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804002D4, 0x804002D4) //this is a jump label
/*804002D4 003FD0D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804002D8 003FD0D8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*804002DC 003FD0DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804002E0 003FD0E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r5));
/*804002E4 003FD0E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*804002E8 003FD0E8*/ PPC::Runtime::ASM::bctrl();
/*804002EC 003FD0EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804002F0 003FD0F0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*804002F4 003FD0F4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_804002F8, 0x804002F8) //this is a jump label
/*804002F8 003FD0F8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*804002FC 003FD0FC*/ PPC::Runtime::ASM::bne(.L_8040025C);
/*80400300 003FD100*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80400304 003FD104*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80400308 003FD108*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8040030C 003FD10C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80400310 003FD110*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80400314 003FD114*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80400318 003FD118*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8040031C 003FD11C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80400320 003FD120*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80400324 003FD124*/ PPC::Runtime::ASM::blr();
}