//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800948A4.hpp"
#include "fn_8008D354.hpp"
#include "fn_8008F44C.hpp"
#include "fn_8008EEF8.hpp"



void fn_8008AA0C(PPC::Runtime::GCContext* context)
{
/*8008AA0C 0008780C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*8008AA10 00087810*/ PPC::Runtime::ASM::mflr(context->r0);
/*8008AA14 00087814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8008AA18 00087818*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8008AA1C 0008781C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8008AA20 00087820*/ PPC::Runtime::ASM::bl(fn_OSGetCurrentContext);
/*8008AA24 00087824*/ PPC::Runtime::ASM::lis(context->r3, _stack_end @ Get_MemoryOffset_HighBit);
/*8008AA28 00087828*/ PPC::Runtime::ASM::li(context->r31, 0xaa);
/*8008AA2C 0008782C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, _stack_end @ Get_MemoryOffset_LowBit);
/*8008AA30 00087830*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x4);
/*8008AA34 00087834*/ PPC::Runtime::ASM::b(.L_8008AA40);
RUNTIME_PPC_JUMP_LABEL(.L_8008AA38, 0x8008AA38) //this is a jump label
/*8008AA38 00087838*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8008AA3C 0008783C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8008AA40, 0x8008AA40) //this is a jump label
/*8008AA40 00087840*/ PPC::Runtime::ASM::bl(fn_OSGetStackPointer);
/*8008AA44 00087844*/ PPC::Runtime::ASM::cmplw(context->r30, context->r3);
/*8008AA48 00087848*/ PPC::Runtime::ASM::blt(.L_8008AA38);
/*8008AA4C 0008784C*/ PPC::Runtime::ASM::lis(context->r4, BLOCK_OF_NULL @ Get_MemoryOffset_HighBit);
/*8008AA50 00087850*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805530D8 @ Get_MemoryOffset_HighBit);
/*8008AA54 00087854*/ PPC::Runtime::ASM::addi(context->r5, context->r4, BLOCK_OF_NULL @ Get_MemoryOffset_LowBit);
/*8008AA58 00087858*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AA5C 0008785C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805530D8 @ Get_MemoryOffset_LowBit);
/*8008AA60 00087860*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x4);
/*8008AA64 00087864*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8008AA68 00087868*/ PPC::Runtime::ASM::subi(context->r6, context->r5, 0x4);
/*8008AA6C 0008786C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AA70, 0x8008AA70) //this is a jump label
/*8008AA70 00087870*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AA74 00087874*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AA78 00087878*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AA7C 0008787C*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AA80 00087880*/ PPC::Runtime::ASM::bdnz(.L_8008AA70);
RUNTIME_PPC_JUMP_LABEL(.L_8008AA84, 0x8008AA84) //this is a jump label
/*8008AA84 00087884*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AA88 00087888*/ PPC::Runtime::ASM::subi(context->r7, context->r3, 0x4);
/*8008AA8C 0008788C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AA90 00087890*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AA94, 0x8008AA94) //this is a jump label
/*8008AA94 00087894*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AA98 00087898*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AA9C 0008789C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AAA0 000878A0*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AAA4 000878A4*/ PPC::Runtime::ASM::bdnz(.L_8008AA94);
/*8008AAA8 000878A8*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AAAC 000878AC*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x54);
/*8008AAB0 000878B0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AAB4 000878B4*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AAB8, 0x8008AAB8) //this is a jump label
/*8008AAB8 000878B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AABC 000878BC*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AAC0 000878C0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AAC4 000878C4*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AAC8 000878C8*/ PPC::Runtime::ASM::bdnz(.L_8008AAB8);
/*8008AACC 000878CC*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AAD0 000878D0*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0xac);
/*8008AAD4 000878D4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AAD8 000878D8*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AADC, 0x8008AADC) //this is a jump label
/*8008AADC 000878DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AAE0 000878E0*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AAE4 000878E4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AAE8 000878E8*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AAEC 000878EC*/ PPC::Runtime::ASM::bdnz(.L_8008AADC);
/*8008AAF0 000878F0*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AAF4 000878F4*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x104);
/*8008AAF8 000878F8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AAFC 000878FC*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AB00, 0x8008AB00) //this is a jump label
/*8008AB00 00087900*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AB04 00087904*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AB08 00087908*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AB0C 0008790C*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AB10 00087910*/ PPC::Runtime::ASM::bdnz(.L_8008AB00);
/*8008AB14 00087914*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AB18 00087918*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x15c);
/*8008AB1C 0008791C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AB20 00087920*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AB24, 0x8008AB24) //this is a jump label
/*8008AB24 00087924*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AB28 00087928*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AB2C 0008792C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AB30 00087930*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AB34 00087934*/ PPC::Runtime::ASM::bdnz(.L_8008AB24);
/*8008AB38 00087938*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AB3C 0008793C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x1b4);
/*8008AB40 00087940*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AB44 00087944*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AB48, 0x8008AB48) //this is a jump label
/*8008AB48 00087948*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AB4C 0008794C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AB50 00087950*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AB54 00087954*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AB58 00087958*/ PPC::Runtime::ASM::bdnz(.L_8008AB48);
/*8008AB5C 0008795C*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AB60 00087960*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x20c);
/*8008AB64 00087964*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AB68 00087968*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AB6C, 0x8008AB6C) //this is a jump label
/*8008AB6C 0008796C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AB70 00087970*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AB74 00087974*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AB78 00087978*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008AB7C 0008797C*/ PPC::Runtime::ASM::bdnz(.L_8008AB6C);
/*8008AB80 00087980*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8008AB84 00087984*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x264);
/*8008AB88 00087988*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x4);
/*8008AB8C 0008798C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8008AB90, 0x8008AB90) //this is a jump label
/*8008AB90 00087990*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8008AB94 00087994*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8008AB98 00087998*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8008AB9C 0008799C*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8008ABA0 000879A0*/ PPC::Runtime::ASM::bdnz(.L_8008AB90);
/*8008ABA4 000879A4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8008ABA8 000879A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2c0);
/*8008ABAC 000879AC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x20);
/*8008ABB0 000879B0*/ PPC::Runtime::ASM::blt(.L_8008AA84);
/*8008ABB4 000879B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8008ABB8 000879B8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_HighBit);
/*8008ABBC 000879BC*/ PPC::Runtime::ASM::stwu(context->r4, STRUCT_BYTE4_COUNT_180553BD8 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8008ABC0 000879C0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8008ABC4 000879C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8008ABC8 000879C8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8008ABCC 000879CC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8008ABD0 000879D0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8008ABD4 000879D4*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*8008ABD8 000879D8*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8008ABDC 000879DC*/ PPC::Runtime::ASM::bl(fn_800948A4);
/*8008ABE0 000879E0*/ PPC::Runtime::ASM::bl(fn_8008D354);
/*8008ABE4 000879E4*/ PPC::Runtime::ASM::bl(fn_8008F44C);
/*8008ABE8 000879E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8008ABEC 000879EC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8008ABF0 000879F0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD67C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8008ABF4 000879F4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD678 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8008ABF8 000879F8*/ PPC::Runtime::ASM::bl(fn_8008EEF8);
/*8008ABFC 000879FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8008AC00 00087A00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8008AC04 00087A04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8008AC08 00087A08*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8008AC0C 00087A0C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*8008AC10 00087A10*/ PPC::Runtime::ASM::blr();
}