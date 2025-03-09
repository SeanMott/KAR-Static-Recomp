//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDSeek.hpp"
#include "fn___CARDGetDirBlock.hpp"
#include "fn___CARDAccess.hpp"
#include "fn___CARDIsPublic.hpp"
#include "fn___CARDPutControlBlock.hpp"
#include "DCInvalidateRange.hpp"
#include "fn___CARDDefaultApiCallback.hpp"
#include "fn___CARDDefaultApiCallback.hpp"
#include "fn_ReadCallback.hpp"
#include "fn_ReadCallback.hpp"
#include "fn___CARDRead.hpp"
#include "fn___CARDPutControlBlock.hpp"



void fn_CARDReadAsync(PPC::Runtime::GCContext* context)
{
/*803E7940 003E4740*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E7944 003E4744*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/* 803E7948 003E4748  54 C0 05 FF */ clrlwi. context->r0 , context->r6 , 23
/*803E794C 003E474C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r1));
/*803E7950 003E4750*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7954 003E4754*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803E7958 003E4758*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*803E795C 003E475C*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x0);
/*803E7960 003E4760*/ PPC::Runtime::ASM::addi(context->r27, context->r7, 0x0);
/*803E7964 003E4764*/ PPC::Runtime::ASM::bne(.L_803E7970);
/* 803E7968 003E4768  57 E0 05 FF */ clrlwi. context->r0 , context->r31 , 23
/*803E796C 003E476C*/ PPC::Runtime::ASM::beq(.L_803E7978);
RUNTIME_PPC_JUMP_LABEL(.L_803E7970, 0x803E7970) //this is a jump label
/*803E7970 003E4770*/ PPC::Runtime::ASM::li(context->r3, -0x80);
/*803E7974 003E4774*/ PPC::Runtime::ASM::b(.L_803E7A74);
RUNTIME_PPC_JUMP_LABEL(.L_803E7978, 0x803E7978) //this is a jump label
/*803E7978 003E4778*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803E797C 003E477C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803E7980 003E4780*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x0);
/*803E7984 003E4784*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x1c);
/*803E7988 003E4788*/ PPC::Runtime::ASM::bl(fn___CARDSeek);
/*803E798C 003E478C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E7990 003E4790*/ PPC::Runtime::ASM::bge(.L_803E7998);
/*803E7994 003E4794*/ PPC::Runtime::ASM::b(.L_803E7A74);
RUNTIME_PPC_JUMP_LABEL(.L_803E7998, 0x803E7998) //this is a jump label
/*803E7998 003E4798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E799C 003E479C*/ PPC::Runtime::ASM::bl(fn___CARDGetDirBlock);
/*803E79A0 003E47A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*803E79A4 003E47A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 6);
/*803E79A8 003E47A8*/ PPC::Runtime::ASM::add(context->r28, context->r3, context->r0);
/*803E79AC 003E47AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E79B0 003E47B0*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*803E79B4 003E47B4*/ PPC::Runtime::ASM::bl(fn___CARDAccess);
/*803E79B8 003E47B8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x0);
/*803E79BC 003E47BC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0xa);
/*803E79C0 003E47C0*/ PPC::Runtime::ASM::bne(.L_803E79D0);
/*803E79C4 003E47C4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803E79C8 003E47C8*/ PPC::Runtime::ASM::bl(fn___CARDIsPublic);
/*803E79CC 003E47CC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803E79D0, 0x803E79D0) //this is a jump label
/*803E79D0 003E47D0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803E79D4 003E47D4*/ PPC::Runtime::ASM::bge(.L_803E79E4);
/*803E79D8 003E47D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E79DC 003E47DC*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
/*803E79E0 003E47E0*/ PPC::Runtime::ASM::b(.L_803E7A74);
RUNTIME_PPC_JUMP_LABEL(.L_803E79E4, 0x803E79E4) //this is a jump label
/*803E79E4 003E47E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803E79E8 003E47E8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803E79EC 003E47EC*/ PPC::Runtime::ASM::bl(DCInvalidateRange);
/*803E79F0 003E47F0*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*803E79F4 003E47F4*/ PPC::Runtime::ASM::beq(.L_803E7A00);
/*803E79F8 003E47F8*/ PPC::Runtime::ASM::mr(context->r0, context->r27);
/*803E79FC 003E47FC*/ PPC::Runtime::ASM::b(.L_803E7A08);
RUNTIME_PPC_JUMP_LABEL(.L_803E7A00, 0x803E7A00) //this is a jump label
/*803E7A00 003E4800*/ PPC::Runtime::ASM::lis(context->r3, fn___CARDDefaultApiCallback @ Get_MemoryOffset_HighBit);
/*803E7A04 003E4804*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn___CARDDefaultApiCallback @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_803E7A08, 0x803E7A08) //this is a jump label
/*803E7A08 003E4808*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7A0C 003E480C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*803E7A10 003E4810*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7A14 003E4814*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803E7A18 003E4818*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803E7A1C 003E481C*/ PPC::Runtime::ASM::subi(context->r0, context->r5, 0x1);
/*803E7A20 003E4820*/ PPC::Runtime::ASM::and(context->r8, context->r4, context->r0);
/*803E7A24 003E4824*/ PPC::Runtime::ASM::subf(context->r3, context->r8, context->r5);
/*803E7A28 003E4828*/ PPC::Runtime::ASM::cmpw(context->r31, context->r3);
/*803E7A2C 003E482C*/ PPC::Runtime::ASM::bge(.L_803E7A34);
/*803E7A30 003E4830*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_803E7A34, 0x803E7A34) //this is a jump label
/*803E7A34 003E4834*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*803E7A38 003E4838*/ PPC::Runtime::ASM::lis(context->r4, fn_ReadCallback @ Get_MemoryOffset_HighBit);
/*803E7A3C 003E483C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803E7A40 003E4840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803E7A44 003E4844*/ PPC::Runtime::ASM::mullw(context->r0, context->r5, context->r0);
/*803E7A48 003E4848*/ PPC::Runtime::ASM::addi(context->r7, context->r4, fn_ReadCallback @ Get_MemoryOffset_LowBit);
/*803E7A4C 003E484C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x0);
/*803E7A50 003E4850*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x0);
/*803E7A54 003E4854*/ PPC::Runtime::ASM::add(context->r4, context->r8, context->r0);
/*803E7A58 003E4858*/ PPC::Runtime::ASM::bl(fn___CARDRead);
/* 803E7A5C 003E485C  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*803E7A60 003E4860*/ PPC::Runtime::ASM::bge(.L_803E7A70);
/*803E7A64 003E4864*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7A68 003E4868*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803E7A6C 003E486C*/ PPC::Runtime::ASM::bl(fn___CARDPutControlBlock);
RUNTIME_PPC_JUMP_LABEL(.L_803E7A70, 0x803E7A70) //this is a jump label
/*803E7A70 003E4870*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_803E7A74, 0x803E7A74) //this is a jump label
/*803E7A74 003E4874*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7A78 003E4878*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803E7A7C 003E487C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x38);
/*803E7A80 003E4880*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E7A84 003E4884*/ PPC::Runtime::ASM::blr();
}