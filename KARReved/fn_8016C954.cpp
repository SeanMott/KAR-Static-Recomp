//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016D8A8.hpp"
#include "fn_8016E7C4.hpp"
#include "fn_8016DD88.hpp"
#include "fn_80142EBC.hpp"
#include "fn_8016E578.hpp"
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016D8A8.hpp"
#include "fn_8016E7C4.hpp"
#include "fn_8016DD88.hpp"
#include "fn_80142EBC.hpp"
#include "fn_8016E578.hpp"



void fn_8016C954(PPC::Runtime::GCContext* context)
{
/*8016C954 00169754*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016C958 00169758*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016C95C 0016975C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016C960 00169760*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016C964 00169764*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016C968 00169768*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016C96C 0016976C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016C970 00169770*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8016C974 00169774*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8016C978 00169778*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8016C97C 0016977C*/ PPC::Runtime::ASM::bge(.L_8016CA34);
/*8016C980 00169780*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016C984 00169784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb18, context->r3));
/*8016C988 00169788*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016C98C 0016978C*/ PPC::Runtime::ASM::beq(.L_8016CAF8);
/*8016C990 00169790*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8016C994 00169794*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016C998 00169798*/ PPC::Runtime::ASM::mulli(context->r29, context->r0, 0x50);
/*8016C99C 0016979C*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r29);
/*8016C9A0 001697A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r31));
/*8016C9A4 001697A4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016C9A8 001697A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016C9AC 001697AC*/ PPC::Runtime::ASM::beq(.L_8016CA28);
/*8016C9B0 001697B0*/ PPC::Runtime::ASM::bge(.L_8016CAF8);
/*8016C9B4 001697B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016C9B8 001697B8*/ PPC::Runtime::ASM::bge(.L_8016C9C4);
/*8016C9BC 001697BC*/ PPC::Runtime::ASM::b(.L_8016CAF8);
/*8016C9C0 001697C0*/ PPC::Runtime::ASM::b(.L_8016CAF8);
RUNTIME_PPC_JUMP_LABEL(.L_8016C9C4, 0x8016C9C4) //this is a jump label
/*8016C9C4 001697C4*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8016C9C8 001697C8*/ PPC::Runtime::ASM::li(context->r0, 0x23);
/*8016C9CC 001697CC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016C9D0 001697D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016C9D4 001697D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016C9D8 001697D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016C9DC 001697DC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016C9E0 001697E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016C9E4 001697E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016C9E8 001697E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016C9EC 001697EC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016C9F0 001697F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016C9F4 001697F4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016C9F8 001697F8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016C9FC 001697FC*/ PPC::Runtime::ASM::bl(fn_8016D8A8);
/*8016CA00 00169800*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016CA04 00169804*/ PPC::Runtime::ASM::bl(fn_8016E7C4);
/*8016CA08 00169808*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016CA0C 0016980C*/ PPC::Runtime::ASM::bl(fn_8016DD88);
/*8016CA10 00169810*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016CA14 00169814*/ PPC::Runtime::ASM::bl(fn_80142EBC);
/*8016CA18 00169818*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8016CA1C 0016981C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016CA20 00169820*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8016CA24 00169824*/ PPC::Runtime::ASM::b(.L_8016CAF8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CA28, 0x8016CA28) //this is a jump label
/*8016CA28 00169828*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016CA2C 0016982C*/ PPC::Runtime::ASM::bl(fn_8016E578);
/*8016CA30 00169830*/ PPC::Runtime::ASM::b(.L_8016CAF8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CA34, 0x8016CA34) //this is a jump label
/*8016CA34 00169834*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016CA38 00169838*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb20, context->r3));
/*8016CA3C 0016983C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8016CA40 00169840*/ PPC::Runtime::ASM::beq(.L_8016CAF8);
/*8016CA44 00169844*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CA48 00169848*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8016CA4C 0016984C*/ PPC::Runtime::ASM::subi(context->r28, context->r3, 0x2);
/*8016CA50 00169850*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CA54 00169854*/ PPC::Runtime::ASM::mulli(context->r29, context->r3, 0x50);
/*8016CA58 00169858*/ PPC::Runtime::ASM::add(context->r31, context->r30, context->r29);
/*8016CA5C 0016985C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57, context->r31));
/*8016CA60 00169860*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8016CA64 00169864*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8016CA68 00169868*/ PPC::Runtime::ASM::beq(.L_8016CAEC);
/*8016CA6C 0016986C*/ PPC::Runtime::ASM::bge(.L_8016CAF8);
/*8016CA70 00169870*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8016CA74 00169874*/ PPC::Runtime::ASM::bge(.L_8016CA80);
/*8016CA78 00169878*/ PPC::Runtime::ASM::b(.L_8016CAF8);
/*8016CA7C 0016987C*/ PPC::Runtime::ASM::b(.L_8016CAF8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CA80, 0x8016CA80) //this is a jump label
/*8016CA80 00169880*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8016CA84 00169884*/ PPC::Runtime::ASM::li(context->r0, 0x23);
/*8016CA88 00169888*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r31));
/*8016CA8C 0016988C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016CA90 00169890*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x56, context->r31));
/*8016CA94 00169894*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CA98 00169898*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016CA9C 0016989C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CAA0 001698A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016CAA4 001698A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016CAA8 001698A8*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016CAAC 001698AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016CAB0 001698B0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016CAB4 001698B4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CAB8 001698B8*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x2);
/*8016CABC 001698BC*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CAC0 001698C0*/ PPC::Runtime::ASM::bl(fn_8016D8A8);
/*8016CAC4 001698C4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CAC8 001698C8*/ PPC::Runtime::ASM::bl(fn_8016E7C4);
/*8016CACC 001698CC*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CAD0 001698D0*/ PPC::Runtime::ASM::bl(fn_8016DD88);
/*8016CAD4 001698D4*/ PPC::Runtime::ASM::extsb(context->r3, context->r28);
/*8016CAD8 001698D8*/ PPC::Runtime::ASM::bl(fn_80142EBC);
/*8016CADC 001698DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8016CAE0 001698E0*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8016CAE4 001698E4*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8016CAE8 001698E8*/ PPC::Runtime::ASM::b(.L_8016CAF8);
RUNTIME_PPC_JUMP_LABEL(.L_8016CAEC, 0x8016CAEC) //this is a jump label
/*8016CAEC 001698EC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*8016CAF0 001698F0*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8016CAF4 001698F4*/ PPC::Runtime::ASM::bl(fn_8016E578);
RUNTIME_PPC_JUMP_LABEL(.L_8016CAF8, 0x8016CAF8) //this is a jump label
/*8016CAF8 001698F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016CAFC 001698FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016CB00 00169900*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016CB04 00169904*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016CB08 00169908*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016CB0C 0016990C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016CB10 00169910*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016CB14 00169914*/ PPC::Runtime::ASM::blr();
}