//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_8014C8D8.hpp"
#include "fn_8014C8D8.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138C90.hpp"
#include "fn_80138C1C.hpp"
#include "fn_80138C1C.hpp"



void fn_8014C958(PPC::Runtime::GCContext* context)
{
/*8014C958 00149758*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014C95C 0014975C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014C960 00149760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014C964 00149764*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014C968 00149768*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014C96C 0014976C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C970 00149770*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014C974 00149774*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014C978 00149778*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r3));
/*8014C97C 0014977C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014C980 00149780*/ PPC::Runtime::ASM::beq(.L_8014C990);
/*8014C984 00149784*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014C988 00149788*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014C98C 0014978C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8014C990, 0x8014C990) //this is a jump label
/*8014C990 00149790*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r30));
/*8014C994 00149794*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8014C998 00149798*/ PPC::Runtime::ASM::li(context->r5, 0x50);
/*8014C99C 0014979C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014C9A0 001497A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014C9A4 001497A4*/ PPC::Runtime::ASM::bl(fn_80138934);
/*8014C9A8 001497A8*/ PPC::Runtime::ASM::lis(context->r4, fn_8014C8D8 @ Get_MemoryOffset_HighBit);
/*8014C9AC 001497AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014C9B0 001497B0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8014C9B4 001497B4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8014C9B8 001497B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8014C8D8 @ Get_MemoryOffset_LowBit);
/*8014C9BC 001497BC*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8014C9C0 001497C0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014C9C4 001497C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014C9C8 001497C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r30));
/*8014C9CC 001497CC*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8014C9D0 001497D0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014C9D4 001497D4*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8014C9D8 001497D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8014C9DC 001497DC*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8014C9E0 001497E0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8014C9E4 001497E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014C9E8 001497E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8014C9EC 001497EC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8014C9F0 001497F0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014C9F4 001497F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8014C9F8 001497F8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8014C9FC 001497FC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8014CA00 00149800*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014CA04 00149804*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8014CA08 00149808*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8014CA0C 0014980C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8014CA10 00149810*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8014CA14 00149814*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8014CA18 00149818*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014CA1C 0014981C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014CA20 00149820*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8014CA24 00149824*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8014CA28 00149828*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8014CA2C 0014982C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8014CA30 00149830*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8014CA34 00149834*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8014CA38 00149838*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8014CA3C 0014983C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8014CA40 00149840*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014CA44 00149844*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8014CA48 00149848*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*8014CA4C 0014984C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8014CA50 00149850*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8014CA54 00149854*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014CA58 00149858*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*8014CA5C 0014985C*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*8014CA60 00149860*/ PPC::Runtime::ASM::lis(context->r3, 0x51ec);
/*8014CA64 00149864*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8014CA68 00149868*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7ae1);
/*8014CA6C 0014986C*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/* 8014CA70 00149870  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*8014CA74 00149874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8014CA78 00149878*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x6667);
/*8014CA7C 0014987C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014CA80 00149880*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 5);
/*8014CA84 00149884*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8014CA88 00149888*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8014CA8C 0014988C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x64);
/*8014CA90 00149890*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r5);
/* 8014CA94 00149894  7C 06 00 96 */ mulhw context->r0 , context->r6 , context->r0
/*8014CA98 00149898*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8014CA9C 0014989C*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8014CAA0 001498A0*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8014CAA4 001498A4*/ PPC::Runtime::ASM::bl(fn_80138C1C);
/*8014CAA8 001498A8*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8014CAAC 001498AC*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*8014CAB0 001498B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8014CAB4 001498B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/* 8014CAB8 001498B8  7C 00 28 96 */ mulhw context->r0 , context->r0 , context->r5
/*8014CABC 001498BC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014CAC0 001498C0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8014CAC4 001498C4*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8014CAC8 001498C8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r4);
/*8014CACC 001498CC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8014CAD0 001498D0*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r5);
/*8014CAD4 001498D4*/ PPC::Runtime::ASM::bl(fn_80138C1C);
/*8014CAD8 001498D8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3fc, context->r30));
/*8014CADC 001498DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014CAE0 001498E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014CAE4 001498E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014CAE8 001498E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014CAEC 001498EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014CAF0 001498F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014CAF4 001498F4*/ PPC::Runtime::ASM::blr();
}