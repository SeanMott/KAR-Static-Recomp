//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005523C.hpp"
#include "fn_800550F4.hpp"
#include "fn_800550BC.hpp"



void fn_800DBC2C(PPC::Runtime::GCContext* context)
{
/*800DBC2C 000D8A2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800DBC30 000D8A30*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DBC34 000D8A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DBC38 000D8A38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DBC3C 000D8A3C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DBC40 000D8A40*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DBC44 000D8A44*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DBC48 000D8A48*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800DBC4C 000D8A4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800DBC50 000D8A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800DBC54 000D8A54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800DBC58 000D8A58*/ PPC::Runtime::ASM::beq(.L_800DBC64);
/*800DBC5C 000D8A5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800DBC60 000D8A60*/ PPC::Runtime::ASM::b(.L_800DBC68);
RUNTIME_PPC_JUMP_LABEL(.L_800DBC64, 0x800DBC64) //this is a jump label
/*800DBC64 000D8A64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800DBC68, 0x800DBC68) //this is a jump label
/*800DBC68 000D8A68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800DBC6C 000D8A6C*/ PPC::Runtime::ASM::beq(.L_800DBCF8);
/*800DBC70 000D8A70*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800DBC74 000D8A74*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800DBC78 000D8A78*/ PPC::Runtime::ASM::beq(.L_800DBCF8);
/*800DBC7C 000D8A7C*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x14);
/*800DBC80 000D8A80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r29));
/*800DBC84 000D8A84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800DBC88 000D8A88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800DBC8C 000D8A8C*/ PPC::Runtime::ASM::add(context->r28, context->r5, context->r0);
/*800DBC90 000D8A90*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnimAll);
/*800DBC94 000D8A94*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800DBC98 000D8A98*/ PPC::Runtime::ASM::bne(.L_800DBCA4);
/*800DBC9C 000D8A9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800DBCA0 000D8AA0*/ PPC::Runtime::ASM::b(.L_800DBCA8);
RUNTIME_PPC_JUMP_LABEL(.L_800DBCA4, 0x800DBCA4) //this is a jump label
/*800DBCA4 000D8AA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800DBCA8, 0x800DBCA8) //this is a jump label
/*800DBCA8 000D8AA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800DBCAC 000D8AAC*/ PPC::Runtime::ASM::bl(fn_8005523C);
/*800DBCB0 000D8AB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r29));
/*800DBCB4 000D8AB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800DBCB8 000D8AB8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800DBCBC 000D8ABC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800DBCC0 000D8AC0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800DBCC4 000D8AC4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*800DBCC8 000D8AC8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF688 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800DBCCC 000D8ACC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800DBCD0 000D8AD0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*800DBCD4 000D8AD4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*800DBCD8 000D8AD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800DBCDC 000D8ADC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*800DBCE0 000D8AE0*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*800DBCE4 000D8AE4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*800DBCE8 000D8AE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800DBCEC 000D8AEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800DBCF0 000D8AF0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*800DBCF4 000D8AF4*/ PPC::Runtime::ASM::bl(fn_800550BC);
RUNTIME_PPC_JUMP_LABEL(.L_800DBCF8, 0x800DBCF8) //this is a jump label
/*800DBCF8 000D8AF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DBCFC 000D8AFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DBD00 000D8B00*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DBD04 000D8B04*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DBD08 000D8B08*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800DBD0C 000D8B0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DBD10 000D8B10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800DBD14 000D8B14*/ PPC::Runtime::ASM::blr();
}